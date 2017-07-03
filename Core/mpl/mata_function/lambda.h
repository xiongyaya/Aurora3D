#pragma once

#include<Core/preprocessor/range_fore_index_call.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/mata_function/identity.h>
#include<Core/mpl/mata_function/apply.h>
#include<Core/mpl/mata_function/next.h>
#include<Core/mpl/transform_vargs.h>


namespace Aurora3D
{
	namespace mpl
	{
		//knowledgement:
		//Add<P1,P2> Can be Match By specalization of template< template<typename F1,typename F2> typename Fn, typename F1, typename F2>
		//Add Can be Match By main template< template<typename F1,typename F2> typename Fn >


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



		template<template<typename F, typename... FArgs> typename Fn,
			typename T1, typename... TArgs>
		struct LambdaHelper<2, Fn<T1,TArgs...>>
		{
			//next
			typedef VArgExpand<TArgs...> N1;
			typedef typename N1::next N2;

			//template parameter
			typedef typename N1::type T2;
			
			//judgement
			typedef IsNPlaceholder<T1> Judge1;
			typedef IsNPlaceholder<T2> Judge2;

			//NPlaceholder Counter
			typedef Int_<0> C1;
			typedef DeriveIf<Judge1, Next<C1>, C1> C2;
			typedef DeriveIf<Judge2, Next<C2>, C2> C3;

			template<typename N, typename... NArgs>
			struct Apply
			{
				typedef typename LambdaGetParameter<C1, T1, N, NArgs...>::type P1;
				typedef typename LambdaGetParameter<C2, T2, N, NArgs...>::type P2;
				typedef typename Fn<P1, P2>::type type;
			};
		};





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
			struct Apply : public Fn < typename LambdaGetParameter<One_, T, N, NArgs...>::type > {};
		};


		template< template<typename T, typename... TArgs> typename Fn, typename T, typename... TArgs>
		struct Lambda< Fn<T, TArgs...> >
		{
			typedef LambdaHelper<1 + sizeof(TArgs)..., Fn<T,TArgs...>> Helper;
			template<typename N, typename... NArgs>
			struct Apply :public Helper::template Apply<N, NArgs...>{};
		};

	}
}