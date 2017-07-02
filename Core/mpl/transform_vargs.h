#pragma once

#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_declare.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/ingore_t.h>


namespace Aurora3D
{
	namespace mpl
	{
		template<typename Fn, typename T1, typename... Args>
		struct TransformList :public Fn::template Apply<T1>
		{
			typedef TransformList<Fn, Args...> next;
		};

		template<typename Fn, typename T>
		struct TransformList<Fn, T>:public Fn::template Apply<T>
		{
			typedef ingore_t next;
		};

		namespace detail
		{
#define     A3D_PP_TRANSFORM_VARGS_MAX 16

			template<int size, typename Fn, typename RL> struct TransformTableHelper {};

#define  TRANSFORM_TABLE_HELPER_DECL( Index, _1, _2)      \
			template<typename Fn, typename N0>            \
			struct TransformTableHelper<Index, Fn, N0>    \
			{                                             \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::next, N, 1, Index, (;)); \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::type, T, 1, Index, (;)); \
			};

			A3D_PP_RANGE_CALL(1, A3D_PP_TRANSFORM_VARGS_MAX, 1, TRANSFORM_TABLE_HELPER_DECL, _);
#undef	  TRANSFORM_TABLE_HELPER_DECL
		}

		template<typename Fn, typename... Args>
		struct TransformTable :public detail::TransformTableHelper<
			sizeof...(Args), Fn, TransformList<Fn, Args...>> {};
	}
}