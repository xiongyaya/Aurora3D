#pragma once

#include<Core/preprocessor/range_fore_index_call.h>
#include<Core/preprocessor/range_declare.h>
#include<Core/preprocessor/range_call.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/next.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/mata_function/identity.h>


namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename Index, typename T, typename... Args>
			struct LambdaGetParameter :
				public DeriveIf<IsPlaceholder<T>,
				DeriveIf<IsNPlaceholder<T>,
				Apply< Arg<Index::value>, Args...>,
				Apply< T, Args...>>, Identity<T>>{};

			template<typename T,typename... TArgs>
			struct VArgExpand
			{
				typedef T type;
				typedef VArgExpand<TArgs...> next;
			};

			template<typename T>
			struct VArgExpand<T>
			{
				typedef T type;
				typedef ingore_t next;
			};

			//from 2 to A3D_PP_PLACEHOLDER_MAX
			template<int TCount, typename Fn>
			struct LambdaHelper {};

			//typedef DeriveIf<Judge1, Next<C1>, C1> C2;
	#define DERIVE_IF_FORMAT(ForeIndex, Index, _ ) typedef DeriveIf<Judge ## ForeIndex ## , Next<C ## ForeIndex ## >, C ## ForeIndex ## > C ## Index ##;
	#define DERIVE_IF_DECL(Start, End) A3D_PP_RANGE_FORE_INDEX_CALL(Start,End, DERIVE_IF_FORMAT, _)

			//typedef IsNPlaceholder<T1> Judge1;
	#define IS_NPLACEHOLDER_FORMAT(Index, _1, _2) typedef IsNPlaceholder<T ## Index> Judge ## Index ## ;
	#define IS_NPLACEHOLDER_DECL(Start, End) A3D_PP_RANGE_INNER_CALL(Start, End, 1, IS_NPLACEHOLDER_FORMAT, _)

			//typedef typename LambdaGetParameter<C1, T1, N, NArgs...>::type P1;
	#define LAMBDA_GET_PARAMETER_FORMAT(Index, _1, _2)  typedef typename LambdaGetParameter<C## Index ##, T## Index ##, N, NArgs...>::type P## Index ##;
	#define LAMBDA_GET_PARAMETER_DECL(Start, End) A3D_PP_RANGE_INNER_CALL(Start, End, 1, LAMBDA_GET_PARAMETER_FORMAT, _)

	#define LAMBDA_HELPER_SPECIALIZATION_DECL(Index, _1, _2)                               \
			template<template<typename F, typename... FArgs> typename Fn,                  \
				typename T1, typename... TArgs>                                            \
			struct LambdaHelper<Index, Fn<T1,TArgs...>>                                    \
			{                                                                              \
				typedef VArgExpand<TArgs...> N1;                                           \
				typedef Int_<0> C1;                                                        \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::next, N, 2, Index, (;));  \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::type, T, 2, Index, (;));  \
				IS_NPLACEHOLDER_DECL(1, Index);                                            \
				DERIVE_IF_DECL(2, Index);                                                  \
				template<typename N, typename... NArgs>                                    \
				struct Apply                                                               \
				{                                                                          \
					LAMBDA_GET_PARAMETER_DECL(1, Index);                                   \
					typedef typename Fn<A3D_PP_RANGE_PREFIX(P,1,Index,(,))>::type type;    \
				};                                                                         \
			}; 

			A3D_PP_RANGE_CALL(2, A3D_PP_PLACEHOLDER_MAX, 1, LAMBDA_HELPER_SPECIALIZATION_DECL, _);

#undef DERIVE_IF_FORMAT
#undef DERIVE_IF_DECL
#undef IS_NPLACEHOLDER_FORMAT
#undef IS_NPLACEHOLDER_DECL
#undef LAMBDA_GET_PARAMETER_FORMAT
#undef LAMBDA_GET_PARAMETER_DECL
#undef LAMBDA_HELPER_SPECIALIZATION_DECL

		}//detail

		//knowledgement:
		//Add<P1,P2> Can be Match By specalization of template< template<typename F1,typename F2> typename Fn, typename F1, typename F2>
		//Add Can be Match By main template< template<typename F1,typename F2> typename Fn >

		//1. in Partial Function,like Add<_1,_1>, Add<_1, Int_<20>>
		//2. In Nesting template Function, like Mul<Add<_,_>,Sub<_,_>>
		//3. replace template Function, if no type in Fn,  Apply<Lambda<Fn<_>>,T>::type ===Fn<T> 
		//4. support container operationm like transform< vector, deriveif<isXX<_>, do1<_>,do2<_>>>

		//for Mata-Function Class
		template<typename T>
		struct Lambda
		{
			template<typename... Args>
			struct Apply:public T::template Apply<Args...> {};
		};

		//For One Parameter MataFunction Template Class
		template< template<typename T> typename Fn, typename T>
		struct Lambda< Fn<T> >
		{
			template<typename N, typename... NArgs>
			struct Apply : public Fn < typename detail::LambdaGetParameter<One_, T, N, NArgs...>::type > {};
		};

		template< template<typename T, typename... TArgs> typename Fn, typename T, typename... TArgs>
		struct Lambda< Fn<T, TArgs...> >
		{
			typedef detail::LambdaHelper<1 + sizeof...(TArgs), Fn<T,TArgs...>> Helper;
			template<typename N, typename... NArgs>
			struct Apply :public Helper::template Apply<N, NArgs...>{};
		};

	}
}