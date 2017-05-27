#pragma once

#include<Core/type.h>
#include<Core/mpl/sizet_.h>

#if defined(AURORA3D_COMPILER_MSVC)
#pragma warning(push)
//4324 : because of align declare signature, MaxAlign_t had been filled
#pragma warning(disable:4324)
#endif

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<size_t len, size_t align, typename T, bool align_less> struct Align;
		}
		
		template<size_t len, size_t align> struct AlignedStorage :public detail::Align<len, align, int8, align <= alignof(int8)> {};
		template<size_t len, size_t align> using  AlignedStorage_t = typename AlignedStorage<len,align>::type;
		template<typename T>               struct AlignedTypeStorage :public AlignedStorage<sizeof(T), alignof(T)> {};
		template<typename T>               using  AlignedTypeStorage_t = typename AlignedTypeStorage<T>::type;
		//hide
		namespace detail
		{
			struct alignas(16) Vector4_t
			{
				uint8  pad[16];
			};

			struct alignas(32) Vector4x2_t
			{
				uint8  vec[32];
			};

			struct alignas(128) Cache_t
			{
				uint8  pad[128];

			};

			//aligned vector, float128
			union MaxAlign_t
			{
				int8       byte;
				int16      word;
				int32      dword;
				int64      qword;
				hfloat     hprec;
#if defined(AURORA3D_SSE) || defined(AURORA3D_NEON)
				Vector4_t   Vec;
				Vector4x2_t Vec2;
#endif
#if defined(AURORA3D_CACHE_OPT)
				Cache_t    cache;
#endif
			};

			template<typename T, size_t len>
			union AlignBase_t
			{
				T     t;
				uint8 pad[len];
			};

			template<size_t len, size_t align, typename T, bool align_less> struct Align;
			template<size_t len, size_t align, typename T> struct Align<len, align, T, true > { typedef typename AlignBase_t<T, len> type; };
			template<size_t len, size_t align>             struct Align<len, align, Cache_t, false> { typedef typename AlignBase_t<Cache_t, len> type; };
			template<size_t len, size_t align>             struct Align<len, align, Vector4x2_t, false> { typedef typename Align<len, align, Cache_t, align <= alignof(Cache_t)>::type type; };
			template<size_t len, size_t align>             struct Align<len, align, Vector4_t, false> { typedef typename Align<len, align, Vector4x2_t, align <= alignof(Vector4x2_t)>::type type;};
			template<size_t len, size_t align>             struct Align<len, align, hfloat, false> { typedef typename Align<len, align, Vector4_t, align <= alignof(Vector4_t)>::type type; };
			template<size_t len, size_t align>             struct Align<len, align, int64, false> { typedef typename Align<len, align, hfloat, align <= alignof(hfloat)>::type type; };
			template<size_t len, size_t align>             struct Align<len, align, int32, false> { typedef typename Align<len, align, int64, align <= alignof(int64)>::type  type; };
			template<size_t len, size_t align>             struct Align<len, align, int16, false> { typedef typename Align<len, align, int32, align <= alignof(int32)>::type  type; };
			template<size_t len, size_t align>             struct Align<len, align, int8, false> { typedef typename Align<len, align, int16, align <= alignof(int16)>::type  type; };
		} //detail

		

	}
}

#if defined(A3D_COMPILER_MSVC)
#pragma warning(pop)
#endif