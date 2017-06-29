#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int64 V1, int64 V2> struct BitAnd2 :public Int_< V1 & V2 > {};
		template<typename  T1, typename T2> struct TypeBitAnd2 :public Int_<T1::value & T2::value> {};
		
		//Lazy
		template<int64 V1, int64... VS>
		struct BitAnd :public TypeBitAnd2< Int_<V1>, BitAnd<VS...> > {};
		template<int64 V> struct BitAnd<V> :public Int_<V> {};

		//Lazy
		template<typename T1, typename... TS>
		struct TypeBitAnd :public TypeBitAnd2< T1, TypeBitAnd<TS...>> {};
		template<typename T> struct TypeBitAnd<T> :public T {};
	}
}