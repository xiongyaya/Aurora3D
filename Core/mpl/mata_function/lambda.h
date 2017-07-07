#pragma once

#include<Core/preprocessor/range_fore_index_call.h>
#include<Core/preprocessor/range_declare.h>
#include<Core/preprocessor/range_call.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/next.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/mata_function/identity.h>
#include<Core/mpl/type_traits/has_inner_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		//hide helper function
		namespace detail
		{
			template<typename Index, typename IsNPlaceholder, typename T, typename... Args>
			struct LambdaGetParameter :
				public DeriveIf<IsPlaceholder<T>,
						DeriveIf<IsNPlaceholder, Apply< Arg<Index::value>, Args...>, Apply< T, Args...>>,
					    Identity<T>>
			{};

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

			//example 
			template<template<typename F, typename... FArgs> typename Fn, typename T1, typename... TArgs>
			struct LambdaHelper<2, Fn<T1, TArgs...>>
			{
				typedef VArgExpand<TArgs...> N1;
				typedef Int_<0> C0;
				typedef typename N1::next N2;
				typedef typename N1::type T2;
				typedef IsNPlaceholder<T1> Judge1;
				typedef IsNPlaceholder<T2> Judge2;
				typedef DeriveIf<Judge1, Next<C0>, C0> C1;
				typedef DeriveIf<Judge2, Next<C1>, C1> C2;
				template<typename N, typename... NArgs>
				struct Apply
				{
					typedef typename LambdaGetParameter<C1, Judge1, T1, N, NArgs...>::type P1;
					typedef typename LambdaGetParameter<C2, Judge2, T2, N, NArgs...>::type P2;

					//if   Fn<...>::type is exists return Fn<...>::type
					//else return Fn<...> 
					typedef Fn<P1, P2 > ResultFn;
					typedef typename DeriveIf< HasInnerType<ResultFn>, 
						ResultFn, Identity<ResultFn>>::type type;
				};
			};


			//typedef DeriveIf<Judge1, Next<C1>, C1> C2;
	#define DERIVE_IF_FORMAT(ForeIndex, Index, _ ) typedef DeriveIf<Judge ## Index ## , Next<C ## ForeIndex ## >, C ## ForeIndex ## > C ## Index ##;
	#define DERIVE_IF_DECL(Start, End) A3D_PP_RANGE_FORE_INDEX_CALL(Start,End, DERIVE_IF_FORMAT, _)

			//typedef IsNPlaceholder<T1> Judge1;
	#define IS_NPLACEHOLDER_FORMAT(Index, _1, _2) typedef IsNPlaceholder<T ## Index> Judge ## Index ## ;
	#define IS_NPLACEHOLDER_DECL(Start, End) A3D_PP_RANGE_INNER_CALL(Start, End, 1, IS_NPLACEHOLDER_FORMAT, _)

			//typedef typename LambdaGetParameter<C1, T1, N, NArgs...>::type P1;
	#define LAMBDA_GET_PARAMETER_FORMAT(Index, _1, _2)  typedef typename LambdaGetParameter<C## Index ##, Judge ## Index ##, T## Index ##, N, NArgs...>::type P## Index ##;
	#define LAMBDA_GET_PARAMETER_DECL(Start, End) A3D_PP_RANGE_INNER_CALL(Start, End, 1, LAMBDA_GET_PARAMETER_FORMAT, _)


			//LambdaHelper<Index[3-A3D_PP_PLACEHOLDER_MAX], Fn<T1, TArgs...>>
	#define LAMBDA_HELPER_SPECIALIZATION_DECL(Index, _1, _2)                               \
			template<template<typename F, typename... FArgs> typename Fn,                  \
				typename T1, typename... TArgs>                                            \
			struct LambdaHelper<Index, Fn<T1,TArgs...>>                                    \
			{                                                                              \
				typedef VArgExpand<TArgs...> N1;                                           \
				typedef Int_<0> C0;                                                        \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::next, N, 2, Index, (;));  \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::type, T, 2, Index, (;));  \
				IS_NPLACEHOLDER_DECL(1, Index);                                            \
				DERIVE_IF_DECL(1, Index);                                                  \
				template<typename N, typename... NArgs>                                    \
				struct Apply                                                               \
				{                                                                          \
					LAMBDA_GET_PARAMETER_DECL(1, Index);                                   \
					typedef Fn<A3D_PP_RANGE_PREFIX(P,1,Index,(,))> ResultFn;               \
					typedef typename DeriveIf< HasInnerType<ResultFn>,                     \
						ResultFn, Identity<ResultFn>>::type type;                          \
				};                                                                         \
			}; 

			A3D_PP_RANGE_CALL(3, A3D_PP_PLACEHOLDER_MAX, 1, LAMBDA_HELPER_SPECIALIZATION_DECL, _);

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

		// pros
		// 1. in Partial Function,like Add<_1,_1>, Add<_1, Int_<20>>
		// 2. In Nesting template Function, like Mul<Add<_,_>,Sub<_,_>>
		// 3. replace template Function, if no type in Fn,  Apply<Lambda<Fn<_>>,T>::type ===Fn<T> 
		// 4. support container operationm like transform< vector, deriveif<isXX<_>, do1<_>,do2<_>>>

		// cons
		// 1. may compile slow than AddApply, Mata_Fn

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