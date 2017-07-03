#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/transform_vargs.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			//no _n placeholder
			template<bool containNPlaceholder,typename Fn, typename T,typename... TArgs >
			struct LambdaHelper
			{
				template<typename N,typename... NArgs>
				struct Apply
				{

				};
			};

			
		}

		//for Mata-Function Class
		template<typename T>
		struct Lambda
		{
			template<typename... Args>
			struct Apply:public T::template Apply<Args...> {};
		};

		//For One Parameter MataFunction Template Class
		template< template<typename T1> typename Fn, typename T1>
		struct Lambda< Fn<T1> >
		{
			template<typename N1>
			struct Apply: public DeriveIf< IsPlaceholder<T1>, Fn<N1>, Fn<T1> >{};
		};

		//For variable Parameter MataFunction Template Class
		template< template<typename T1,typename... TArgs> typename Fn, typename T1, typename... TArgs>
		struct Lambda< Fn<T1,TArgs...> >
		{
			template<typename N1, typename... NArgs>
			struct Apply 
			{
				typedef Int_<0> v0;
				/*typedef detail::LambdaHelper< IsPlaceholder<T1>::value, v0, T1, N1, Args...> v1;
				typedef detail::LambdaHelper< IsPlaceholder<T2>::value, v1, T2, N1, Args...> v2;
				typedef typename Fn<typename v1::type, typename v2::type>::type type;*/
				typedef int type;
			};
		};

	}
}