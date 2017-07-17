#pragma once

#include<Core/preprocessor/range_fore_index_call.h> 
#include<Core/preprocessor/range_declare.h>  //chain declare
#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/range_wrap.h>

#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/short_inner_type_decl.h>
#include<Core/mpl/meta_function/apply.h>
#include<Core/mpl/meta_function/placeholder.h>
#include<Core/mpl/meta_function/identity.h>
#include<Core/mpl/meta_function/varg_list.h>
#include<Core/mpl/type_traits/has_inner_type.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			//declare LambdaN
			template<int TCount, typename L0>
			struct LambdaN;
		}

		template<typename T>
		struct Lambda
		{
			template<typename N, typename... NArgs>
			struct Apply :public T::template Apply<N, NArgs...>{};
		};

		template< template<typename T, typename... TArgs> typename Fn, typename T, typename... TArgs>
		struct Lambda<Fn<T, TArgs...>>
		{
			static constexpr int TCount = 1 + sizeof...(TArgs);
			typedef VArgList<T, TArgs...> L;
			typedef IsAPlaceholder<T> C;

			//T == __ && TArgs == empty || T TArgs contain no __
			static_assert((C::value && TCount == 1) || !ContainAPlaceholder<T, TArgs...>::value, "template type1 is all-placeholder, extra template parameter is forbidden.");

			template<typename N, typename... NArgs>
			struct Apply : public
				DeriveIf<C,
				CallApply< AddApply<Fn>, N, NArgs...>,
				CallApply< detail::LambdaN<TCount, L>, AddApply<Fn>, N, NArgs...> >
			{};
		};

		template<typename Fn, typename... Args>
		struct ApplyLambda :public CallApply<Lambda<Fn>, Args...> {};


		namespace detail
		{
			//declare Lambda1
			template<typename T, typename NPlaceholderIndex>
			struct Lambda1;

			//Fn::type exists, return Fn::type
			template<typename Fn, bool V = HasInnerType<Fn>::value>
			struct TypeChooseCallApplyHelper : public Fn {};

			//Fn::type not exists, return Fn::wrapper_type
			template<typename Fn>
			struct TypeChooseCallApplyHelper<Fn, false>
			{
				typedef typename Fn::wrapper_type type;
			};

			//if   Fn::template Apply<...>::type exists return Fn::template Apply<...>::type
			//else return Fn::template Apply<...>::wrapper_type, wrapper_type from AddApply< OriginalFn >::tempalte Apply<...>
			template<typename Fn, typename... Args>
			struct TypeChooseCallApply : public TypeChooseCallApplyHelper<CallApply<Fn,Args...>> {};

			//TCount >=1
			template<int TCount, typename L0>
			struct LambdaN {};

			//TCount == 1
			template<typename N0>
			struct LambdaN<1, N0>
			{
				typedef Int_<0> C0;
				typedef typename N0::next N1;
				typedef typename N0::type L1;

				typedef DeriveIf<IsNPlaceholder<L1>, NextT<C0>, C0> C1;
				typedef Lambda1<L1, C1> P1;

				template<typename Fn, typename N, typename... NArgs>
				struct Apply :public TypeChooseCallApply< Fn,
					typename TypeChooseCallApply<P1, N, NArgs...>::type > {};
			};

			//TCount == 2
			template <typename N0>
			struct LambdaN<2, N0>
			{
				typedef Int_<0> C0;
				typedef typename N0::next N1;
				typedef typename N0::type T1;
				typedef typename N1::next N2;
				typedef typename N1::type T2;

				typedef DeriveIf<IsPlaceholder<T1>, NextT<C0>, C0> C1;
				typedef DeriveIf<IsPlaceholder<T2>, NextT<C1>, C1> C2;

				typedef Lambda1<T1, C1> P1;
				typedef Lambda1<T2, C2> P2;

				//Fn is from AddApply<Fn>
				template<typename Fn, typename N, typename... NArgs>
				struct Apply : public TypeChooseCallApply< Fn,
					typename TypeChooseCallApply< P1, N, NArgs...>::type,
					typename TypeChooseCallApply< P2, N, NArgs...>::type >{};
			};

			//typedef DeriveIf<IsNPlaceholder<Tn>, Next<Cn-1>, Cn-1> Cn;
#define MPL_TYPEDEF_DERIVE_IF_FORMAT(ForeIndex, Index, _ ) typedef DeriveIf<IsPlaceholder<T ## Index ##> , NextT<C ## ForeIndex ## >, C ## ForeIndex ## > C ## Index ##;
#define MPL_TYPEDEF_DERIVE_IF_DECL(Start, End) A3D_PP_RANGE_FORE_INDEX_CALL(Start,End, MPL_TYPEDEF_DERIVE_IF_FORMAT, _)

			//typedef Lambda1<Tn, Cn> Pn;
#define MPL_TYPEDEF_LAMBDA1_FORMAT(Index, _1, _2) typedef Lambda1<T ## Index, C ## Index> P ## Index;
#define MPL_TYPEDEF_LAMBDA1_DECL(Start, End) A3D_PP_RANGE_INNER_CALL(Start, End, 1, MPL_TYPEDEF_LAMBDA1_FORMAT, _)

			//typename TypeChooseCallApply< Pn, N, NArgs...>::type , (last no ,)
#define MPL_TYPECHOOSECALLAPPLY_FORMAT(Index, Count, Split) typename TypeChooseCallApply< P ## Index, N, NArgs...>::type A3D_PP_INT_IF( Count, A3D_PP_SEQ_UNPACK, A3D_PP_INGORE) ## (Split)
#define MPL_TYPECHOOSECALLAPPLY_DECL(Start, End) A3D_PP_RANGE_INNER_CALL(Start, End, 1, MPL_TYPECHOOSECALLAPPLY_FORMAT, (,) )
			
			//TCount == Index
#define MPL_LAMBDAN_SPECIALIZATION_FORMAT(Index, _1, _2)  \
			template <typename N0>                        \
			struct LambdaN<Index, N0>                     \
			{                                             \
				typedef Int_<0> C0;                       \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::next, N, 1, Index, (;))  \
				A3D_PP_RANGE_CHAIN_DECLARE(typedef typename N, ::type, T, 1, Index, (;))  \
				MPL_TYPEDEF_DERIVE_IF_DECL(1, Index)      \
				MPL_TYPEDEF_LAMBDA1_DECL(1,Index)         \
				template<typename Fn, typename N, typename... NArgs>                      \
				struct Apply : public TypeChooseCallApply< Fn, MPL_TYPECHOOSECALLAPPLY_DECL(1,Index)> {};  \
			};

			A3D_PP_RANGE_CALL(3, A3D_PP_PLACEHOLDER_MAX, 1, MPL_LAMBDAN_SPECIALIZATION_FORMAT, _);

#undef      MPL_LAMBDAN_SPECIALIZATION_FORMAT
#undef      MPL_TYPECHOOSECALLAPPLY_DECL
#undef      MPL_TYPECHOOSECALLAPPLY_FORMAT
#undef      MPL_TYPEDEF_LAMBDA1_DECL
#undef      MPL_TYPEDEF_LAMBDA1_FORMAT
#undef      MPL_TYPEDEF_DERIVE_IF_DECL
#undef      MPL_TYPEDEF_DERIVE_IF_FORMAT

			//normal type
			template<typename T, typename NPlaceholderIndex>
			struct Lambda1
			{
				template<typename N, typename... NArgs>
				struct Apply
				{
					typedef T type;
				};
			};

			//Arg<1~Max>
			template<int Index, typename NPlaceholderIndex>
			struct Lambda1< Arg<Index>, NPlaceholderIndex >
			{
				static_assert(IsPlaceholder<Arg<Index>>::value, "index in arg<index> out of setting.");

				template<typename N, typename... NArgs>
				struct Apply: Arg<Index>::template Apply<N, NArgs...> {};
			};

			//Arg<_>
			template<typename NPlaceholderIndex>
			struct Lambda1< Arg<-1>, NPlaceholderIndex>
			{
				static_assert(IsPlaceholder<Arg<NPlaceholderIndex::value>>::value, "index in arg<index> out of setting.");

				template<typename N, typename... NArgs>
				struct Apply :public Arg<NPlaceholderIndex::value>::template Apply<N, NArgs...> {};
			};

			//another template-function
			template<template<typename T, typename... TArgs> typename Fn, typename NPlaceholderIndex, typename T, typename... TArgs>
			struct Lambda1< Fn<T, TArgs...>, NPlaceholderIndex>
			{
				static constexpr int TCount = 1 + sizeof...(TArgs);
				typedef VArgList<T, TArgs...> L;

				//T == __ && TArgs ==empty || T TArgs contain no __
				static_assert((IsAPlaceholder<T>::value && TCount == 1) || !ContainAPlaceholder<T, TArgs...>::value, "if all-placeholder is exists, extra-template-parameter is forbidden.");

				template<typename N, typename... NArgs>
				struct Apply :public
					DeriveIf<
					IsAPlaceholder<T>, 
					CallApply< AddApply<Fn>, N, NArgs...>,   //Avoid 1 Parameter Fn Error
					CallApply<LambdaN<TCount, L>, AddApply<Fn>, N, NArgs...> > {};
			};
		}//detail end
	}	 

}
