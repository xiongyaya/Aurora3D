#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int64 V1, int64 V2> struct IntBitOr2 :public Int_< V1 | V2 > {};
		template<typename  T1, typename T2> struct BitOr2 :public Int_<T1::value | T2::value> {};
		
		//Lazy
		// 
		template<int64 V1, int64... VS>
		struct IntBitOr :public BitOr2< Int_<V1>, IntBitOr<VS...> > {};
		template<int64 V> struct IntBitOr<V> :public Int_<V> {};

		//Lazy
		template<typename T1, typename... TS>
		struct BitOr :public BitOr2< T1, BitOr<TS...>> {};
		template<typename T> struct BitOr<T> :public T {};

	}
}