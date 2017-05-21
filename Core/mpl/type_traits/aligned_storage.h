#pragma once

#include<Core/type.h>
#include<Core/mpl/size_t_.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<size_t len, size_t align, typename T, bool align_less> struct Align;
		}
		

		template<size_t len, size_t align> struct AlignedStorage :public detail::Align<len, align, int8, align <= alignof(int8)> {};
		template<typename T>               struct AlignedTypeStorage :public AlignedStorage<sizeof(T), alignof(T)> {};

		//hide
		namespace detail
		{
			struct alignas(16) Vector4_t
			{
				float  float128[4];
			};

			struct alignas(128) Cache_t
			{
				int32 cache[32];
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
				Vector4_t  Vec;
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
			template<size_t len, size_t align>             struct Align<len, align, Vector4_t, false> { typedef typename AlignBase_t<MaxAlign_t, len> type; };
			template<size_t len, size_t align>             struct Align<len, align, hfloat, false> { typedef typename Align<len, align, Vector4_t, align <= alignof(Vector4_t)>::type type; };
			template<size_t len, size_t align>             struct Align<len, align, int64, false> { typedef typename Align<len, align, hfloat, align <= alignof(hfloat)>::type type; };
			template<size_t len, size_t align>             struct Align<len, align, int32, false> { typedef typename Align<len, align, int64, align <= alignof(int64)>::type  type; };
			template<size_t len, size_t align>             struct Align<len, align, int16, false> { typedef typename Align<len, align, int32, align <= alignof(int32)>::type  type; };
			template<size_t len, size_t align>             struct Align<len, align, int8, false> { typedef typename Align<len, align, int16, align <= alignof(int16)>::type  type; };

		} //detail

		

	}
}