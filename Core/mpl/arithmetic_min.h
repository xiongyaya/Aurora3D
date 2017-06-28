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
		

		//not-wrap Min< V1, V2, V3,...>
		template<int64 V1, int64... VS> struct Min :public Int_<detail::Min2(V1, Min<VS...>::value)> {};
		template<int64 V1> struct Min<V1> :public Int_<V1> {};
		template<int64 V1, int64 V2>struct Min<V1,V2> :public Int_ < V1<V2 ? V1 : V2>{};

		//wrap type TypeMin< T1<v1>, T2<v2>, T3<v3>, ... > 
		template<typename First, typename... Others> struct TypeMin : public detail::TypeMin2<First, TypeMin<Others...> > {};
		template<typename T> struct TypeMin<T> :public T {};

	}
}