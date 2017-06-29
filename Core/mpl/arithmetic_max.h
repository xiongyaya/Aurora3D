#pragma once

#include<Core/compile.h>
#include<Core/mpl/integral_.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/type_traits/declval.h>
#include<Core/mpl/type_traits/is_value_type_same.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T1, typename T2, int64 V1 = T1::value, int64 V2 = T2::value>
			struct TypeMax2 :public Int_ <  (V1<V2 ? V2 : V1) >{};
		}

		//not-wrap Min< V1, V2, V3,...>
		template<int64 V1, int64... VS> struct Max
			:public detail::TypeMax2< Int_<V1>, Max<VS...> > {};
		template<int64 V1> struct Max<V1> :public Int_<V1> {};

		//wrap type TypeMin< T1<v1>, T2<v2>, T3<v3>, ... > 
		template<typename First, typename... Others> struct TypeMax
			: public detail::TypeMax2<First, TypeMax<Others...> > {};
		template<typename T> struct TypeMax<T> :public T {};

	}
}