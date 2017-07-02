#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int64 V1, int64 V2> struct IntBitAnd2 :public Int_< V1 & V2 > {};
		template<typename  T1, typename T2> struct BitAnd2 :public Int_<T1::value & T2::value> {};
		
		//Lazy
		template<int64 V1, int64... VS>
		struct IntBitAnd :public BitAnd2< Int_<V1>, IntBitAnd<VS...> > {};
		template<int64 V> struct IntBitAnd<V> :public Int_<V> {};

		//Lazy
		template<typename T1, typename... TS>
		struct BitAnd :public BitAnd2< T1, BitAnd<TS...>> {};
		template<typename T> struct BitAnd<T> :public T {};
	}
}