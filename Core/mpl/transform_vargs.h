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
		//Fn::Apply do transform for each T...
		//InState keep some information... OutState for next transform
		//result type store in list node
		template<typename Fn, typename InState, typename T, typename... Args>
		struct TransformForeach
		{
			typedef Fn::template Apply<T, InState> Transform;
			typedef typename Transform::type type;
			typedef typename Transform::OutState OutState;
			typedef TransformForeach<Fn, OutState, Args...> next;
		};

		//list last node
		template<typename Fn, typename InState, typename T>
		struct TransformForeach<Fn, InState, T>:public Fn::template Apply<T, InState>
		{
			typedef ingore_t next;
		};



		template<typename List, typename T,typename... TArgs>
		struct ListTransform
		{
			typedef typename List::type Fn;
			typedef typename List::next ListNext;
			typedef typename Fn::template Apply<T, TArgs...>::type type;
			typedef ListTransform<ListNext, T, TArgs...> next;
		};

		//last node 
		template<typename T, typename... TArgs>
		struct ListTransform<ingore_t, T,TArgs...>
		{
			typedef ingore_t next;
		};


		namespace detail
		{
#define     A3D_PP_TRANSFORM_VARGS_MAX 16

			//no parameters
			template<int size, typename list> struct TransformTableHelper{};


#define  TRANSFORM_TABLE_HELPER_DECL( Index, _1, _2)      \
			template<typename N0>                         \
			struct TransformTableHelper<Index, N0>        \
			{                                             \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::next, N, 1, Index, (;)); \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::type, T, 1, Index, (;)); \
			};

			A3D_PP_RANGE_CALL(1, A3D_PP_TRANSFORM_VARGS_MAX, 1, TRANSFORM_TABLE_HELPER_DECL, _);
#undef	  TRANSFORM_TABLE_HELPER_DECL
		}

		//extract parameter from TransformList
		//store in T1,T2,...,T[sizeof...(Args)]
		template<typename Fn, typename InState, typename... Args>
		struct TransformTable :public detail::TransformTableHelper<
			sizeof...(Args), TransformForeach<Fn, InState, Args...>> {};
	}
}