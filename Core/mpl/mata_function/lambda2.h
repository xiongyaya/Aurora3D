#pragma once
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
			 struct Apply:public Arg<Index>::template Apply<N,NArgs...>{};
		 };

		 //Arg<_>
		 template<typename NPlaceholderIndex>
		 struct Lambda1< Arg<-1>, NPlaceholderIndex>
		 {

		 };

	}
}
