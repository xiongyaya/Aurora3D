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
		template<typename S,int Pos> struct VectorInsertImpl
		{
			static_assert(Pos <= S::length && Pos >= 0, "VectorInsert Pos out of range.");
		};

		//VectorInsert at Pos 0
		template<typename... TArgs>
		struct VectorInsertImpl<Vector_<TArgs...>, 0>
		{
			template<typename U,typename... UArgs>
			struct Apply
			{
				static_assert(sizeof...(TArgs)+1+sizeof...(UArgs) < A3D_MPL_VECTOR_CAPACITY, "VectorInsert vector capacity is full.");
				typedef Vector_<U, UArgs..., TArgs...> type;
			};
		};

#define MPL_VECTOR_INSERT_IMPL_SPECIALIZATION_DECL(Index, _1, _2)                                                  \
		template<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (, )), typename... TArgs>                          \
		struct VectorInsertImpl<Vector_<A3D_PP_RANGE_PREFIX(T, 0, Index, (,)), TArgs...>, A3D_PP_ADD1(Index)> \
		{                                                                                                     \
			template<typename U, typename... UArgs>                                                           \
			struct Apply                                                                                      \
			{                                                                                                 \
				static_assert(Index + sizeof...(TArgs) + 2 + sizeof...(UArgs) < A3D_MPL_VECTOR_CAPACITY,      \
					"VectorInsert vector capacity is full.");                                                 \
				typedef Vector_<A3D_PP_RANGE_PREFIX(typename T, 0, Index, (,)),                               \
					U, UArgs..., TArgs...> type;                                                              \
			};                                                                                                \
		};
		A3D_PP_RANGE_CALL(0, A3D_PP_SUB1(A3D_MPL_VECTOR_CAPACITY), 1, MPL_VECTOR_INSERT_IMPL_SPECIALIZATION_DECL, _)
#undef  MPL_VECTOR_INSERT_IMPL_SPECIALIZATION_DECL


		//main vector insert at Pos [0, size]
		template<typename S, int Pos, typename U, typename... UArgs>
		struct VectorInsert:public VectorInsertImpl<S,Pos>::template Apply<U,UArgs...>{};
	}
}
