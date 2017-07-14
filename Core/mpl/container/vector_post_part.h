#pragma once

//preprocessor
#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/uint8_add_one.h>
#include<Core/preprocessor/uint8_sub_one.h>
#include<Core/mpl/container/vector_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//get SubVector at [Pos, end)
		template<typename S, int Pos> struct VectorPostPart
		{
			static_assert(Pos <= S::length && Pos >= 0, "VectorErase Pos out of range.");
			static_assert(S::length != 0, "VectorErase vector size need be greater than 0.");
		};

		//erase 0
		template<typename... TArgs>
		struct VectorPostPart< Vector_<TArgs...>, 0>
		{
			typedef Vector_<TArgs...> type;
		};

		// 1~ A3D_MPL_VECTOR_CAPACITY
#define MPL_VECTOR_POST_PART_SEPCIALIZATION_DECL(Index, _1,_2)                                                    \
		template<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,)), typename... TArgs>                               \
		struct VectorPostPart< Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,)), TArgs...>, A3D_PP_ADD1(Index)>      \
		{ typedef Vector_<TArgs...> type; };
		A3D_PP_RANGE_CALL(0, A3D_PP_SUB1(A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_POST_PART_SEPCIALIZATION_DECL, (, ))
#undef  MPL_VECTOR_POST_PART_SEPCIALIZATION_DECL
	}
}
