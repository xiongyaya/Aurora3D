#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/transform_vargs.h>

namespace Aurora3D
{
	namespace mpl
	{
		//for Mata-Function Class
		template<typename T>
		struct Lambda
		{
			template<typename... Args>
			struct Apply:public T::template Apply<Args...> {};
		};

		template<int Index, typename T, typename N, typename... NArgs>
		struct LambdaGetParameter :
			public DeriveIf<IsPlaceholder<T>,
						DeriveIf<IsNPlaceholder<T>,
								 Arg<Index>::template Apply<N, NArgs...>,
							     T::template Apply<N, NArgs...>>, T>{};


		//For One Parameter MataFunction Template Class
		template< template<typename T> typename Fn, typename T>
		struct Lambda< Fn<T> >
		{
			template<typename N, typename... NArgs>
			struct Apply : public Fn < LambdaGetParameter<1, T, N, NArgs...>{}
		};

		//For variable Parameter MataFunction Template Class
		template< template<typename T1,typename T2> typename Fn, typename T1, typename T2>
		struct Lambda< Fn<T1,T2> >
		{ 
			typedef Int_<0> C1;

			typedef IsNPlaceholder<T1> Judge1;
			typedef IsNPlaceholder<T2> Judge2;

			typedef DeriveIf<Judge1, C1::next, C1> C2;
			typedef DeriveIf<Judge2, C2::next, C2> C3;

			
			template<typename N, typename... NArgs>
			struct Apply
			{
				typedef typename LambdaGetParameter<C1::value, T1, N, NArgs...>::type P1;
				typedef typename LambdaGetParameter<C2::value, T2, N, NArgs...>::type P2;
				typedef typename Fn<P1, P2>::type type;
			};
		};

	}
}