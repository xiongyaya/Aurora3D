#pragma once

#include<Core/mpl/int_.h>
namespace Aurora3D
{
	namespace mpl
	{
		//for 2 integral type 
		template<typename T1, typename T2, int64 V1 = T1::value, int64 V2 = T2::value>
		struct Max2 :public Int_ <  (V1<V2 ? V2 : V1) >{};

		//Lazy
		//for n integral type
		template<typename T1, typename... TS> struct Max
			: public Max2<T1, Max<TS...> > {};
		template<typename T> struct Max<T> :public T {};

		//Lazy.
		//for n un-wraped integral type
		template<int64 V1, int64... VS> struct IntMax
			:Max<Int_<V1>, Int_<VS>...> {};
	}
}