#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

#if defined(AURORA3D_COMPILER_MSVC)
#pragma warning(push)
//4324 : because of align declare signature, MaxAlign_t had been filled
#pragma warning(disable:4324)
#endif

namespace Aurora3D
{
	namespace mpl
	{
		//detail hide
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
			union MaxSizeAlign_t
			{
				int8       byte;
				int16      word;
				int32      dword;
				int64      qword;
				hfloat     hprec;
				Vector4_t   Vec;
				Vector4x2_t Vec2;
				Cache_t    cache;
			};

			template<int64 Align, int64 Size>
			struct AlignBase_t
			{
				alignas(Align) uint8 pad[Size];
			};

			template<int64 Size, int64 Align, typename T, bool FoundSuitableAlign> struct AlignHelper;
			template<int64 Size, int64 Align, typename T> struct AlignHelper<Size, Align, T, true > { typedef typename AlignBase_t<Align, Size> type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, Cache_t, false> { typedef typename AlignBase_t<Align, Size> type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, Vector4x2_t, false> { typedef typename AlignHelper<Size, Align, Cache_t, Align <= alignof(Cache_t)>::type type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, Vector4_t, false> { typedef typename AlignHelper<Size, Align, Vector4x2_t, Align <= alignof(Vector4x2_t)>::type type;};
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, hfloat, false> { typedef typename AlignHelper<Size, Align, Vector4_t, Align <= alignof(Vector4_t)>::type type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, int64, false> { typedef typename AlignHelper<Size, Align, hfloat, Align <= alignof(hfloat)>::type type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, int32, false> { typedef typename AlignHelper<Size, Align, int64, Align <= alignof(int64)>::type  type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, int16, false> { typedef typename AlignHelper<Size, Align, int32, Align <= alignof(int32)>::type  type; };
			template<int64 Size, int64 Align>             struct AlignHelper<Size, Align, int8, false> { typedef typename AlignHelper<Size, Align, int16, Align <= alignof(int16)>::type  type; };
		} //detail


		  //decare a aligned storage from length and alignment
		template<int64 Size, int64 Align> struct AlignedStorage :public detail::AlignHelper<Size, Align, int8, (Align <= alignof(int8)) >
		{
			static constexpr int value = alignof(type);
		};
		template<int64 Size, int64 Align> using  AlignedStorageT = typename AlignedStorage<Size, Align>::type;
#define AlignedStorageV(Size, Align) (AlignedStorage<Size,Align>::value)

		//simplified declare
		template<typename T>               struct AlignedTypeStorage :public AlignedStorage<sizeof(T), alignof(T)> {};
		template<typename T>               using  AlignedTypeStorageT = typename AlignedTypeStorage<T>::type;
#define AlignedTypeStorageV(T) (AlignedTypeStorage<T>::value)
	}
}

#if defined(AURORA3D_COMPILER_MSVC)
#pragma warning(pop)
#endif