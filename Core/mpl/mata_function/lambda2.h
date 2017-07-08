#pragma once
#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/choose.h>
#include<Core/mpl/next.h>
#include<Core/mpl/mata_function/apply.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/mata_function/identity.h>
#include<Core/mpl/mata_function/varg_list.h>
#include<Core/mpl/type_traits/has_inner_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T>
		struct IdentityApply
		{
			template<typename N, typename... NArgs>
			struct Apply
			{
				typedef T type;
			};
		};

		//declare Lambda1
		template<typename T, typename NPlaceholderIndex>
		struct Lambda1;

		//TCount >=1
		template<int TCount, typename L0>
		struct LambdaN{};

		//TCount == 1
		template<typename L0>
		struct LambdaN<1,L0>
		{
			typedef Int_<0> C0;
			typedef typename L0::next N1;
			typedef typename L0::type L1;
			
			typedef DeriveIf<IsNPlaceholder<L1>, Next<C0>, C0> C1;

			//typedef Lambda1<L1, C1> P1;
			typedef DeriveIf<IsNPlaceholder<L1>, Arg< C1::value >, IdentityApply<L1>> P1;

			template<typename Fn, typename N, typename... NArgs>
			struct Apply:public Apply< Fn, Apply< P1, N, NArgs...> >
			{};
		};

		//TCount == 2
		template <typename L0>
		struct LambdaN<2, L0>
		{
			typedef Int_<0> C0;
			typedef typename L0::next N1;
			typedef typename L0::type L1;
			typedef typename L1::next N2;
			typedef typename L1::type L2;

			typedef DeriveIf<IsNPlaceholder<L1>, Next<C0>, C0> C1;
			typedef DeriveIf<IsNPlaceholder<L2>, Next<C1>, C1> C2;

			//typedef Lambda1<L1, C1> P1;
			//typedef Lambda1<L2, C2> P2;

			typedef DeriveIf<IsNPlaceholder<L1>, Arg< C1::value >, IdentityApply<L1>> P1;
			typedef DeriveIf<IsNPlaceholder<L2>, Arg< C2::value >, IdentityApply<L2>> P2;

			template<typename Fn, typename N, typename... NArgs>
			struct Apply :public Apply< Fn,
				typename Apply< P1, N, NArgs...>::type ,
				typename Apply< P2, N, NArgs...>::type >
			{};
		};

		 //normal type
		 //template<typename T, typename NPlaceholderIndex>
		 //struct Lambda1
		 //{
			// template<typename N, typename... NArgs>
			// struct Apply
			// {
			//	 typedef T type;
			// };
		 //};

		 ////Arg<1~Max>
		 //template<int Index, typename NPlaceholderIndex>
		 //struct Lambda1< Arg<Index>, NPlaceholderIndex >
		 //{
			// static_assert(IsPlaceholder<Arg<Index>>::value, "index in arg<index> out of setting.");

			// template<typename N, typename... NArgs>
			// struct Apply:public Apply< Arg<Index>, N,NArgs...>{};
		 //};

		 ////Arg<_>
		 //template<typename NPlaceholderIndex>
		 //struct Lambda1< Arg<-1>, NPlaceholderIndex>
		 //{
			// static_assert(IsPlaceholder<Arg<NPlaceholderIndex::value>>::value, "index in arg<index> out of setting.");

			// template<typename N, typename... NArgs>
			// struct Apply :public Apply< Arg<NPlaceholderIndex::value>, N, NArgs...>{};
		 //};

		 ////another template-function
		 //template<template<typename T,typename... TArgs> typename Fn, typename NPlaceholderIndex, typename T,typename... TArgs>
		 //struct Lambda1< Fn<T, TArgs...>, NPlaceholderIndex>
		 //{
			// static constexpr int TCount = 1 + sizeof...(TArgs);
			// typedef VArgList<T, TArgs...> L;

			// //T == __ && TArgs ==empty || T TArgs contain no __
			// static_assert((IsAPlaceholder<T>::value && TCount == 1) || !ContainAPlaceholder<TArgs...>::value, "template type1 is all-placeholder, extra template parameter is forbidden.");

			// template<typename N,typename... NArgs>
			// struct Apply :public
			//	 DeriveIf<
			//	 IsAPlaceholder<T>,
			//	 Fn<N, NArgs...>,
			//	 Apply<LambdaN<TCount, L>, AddApply<Fn>, N, NArgs...> > {};
		 //};

		 template<typename T>
		 struct Lambda2
		 {
			 template<typename N, typename... NArgs>
			 struct Apply :public T::template Apply<N, NArgs...>{};
		 };

		 template< template<typename T, typename... TArgs> typename Fn, typename T, typename... TArgs>
		 struct Lambda2<Fn<T,TArgs...>>
		 {
			 static constexpr int TCount = 1 + sizeof...(TArgs);
			 typedef VArgList<T, TArgs...> L;
			 typedef IsAPlaceholder<T> C;

			 //T == __ && TArgs ==empty || T TArgs contain no __
			 static_assert((C::value && TCount == 1) || !ContainAPlaceholder<TArgs...>::value, "template type1 is all-placeholder, extra template parameter is forbidden.");
			
			 template<typename N, typename... NArgs>
			 struct Apply : public
				 DeriveIf<C,
					Fn<N,NArgs...>,
				    Apply<LambdaN<TCount, L>, AddApply<Fn>,N,NArgs...> >{};	
		 };
	}	 

}
