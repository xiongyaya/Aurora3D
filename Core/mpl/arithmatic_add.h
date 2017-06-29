#pragma once

#include<Core/mpl/int_.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename T1, typename T2, int64 V1 = T1::value, int64 V2 = T2::value>
		struct TypeAdd2 :public Int_ <  (V1<V2 ? V2 : V1) >{};
		
		//wrap type TypeMin< T1<v1>, T2<v2>, T3<v3>, ... > 
		template<typename First, typename... Others> struct TypeMax
			: public TypeMax2<First, TypeMax<Others...> > {};
		template<typename T> struct TypeMax<T> :public T {};
	}
}