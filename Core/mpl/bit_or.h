#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<int64 V1, int64 V2> struct BitOr2 :public Int_< V1 | V2 > {};
		template<typename  T1, typename T2> struct TypeBitOr2 :public Int_<T1::value | T2::value> {};
		
		//Lazy
		template<int64 V1, int64... VS>
		struct BitOr :public TypeBitOr2< Int_<V1>, BitOr<VS...> > {};
		template<int64 V> struct BitOr<V> :public Int_<V> {};

		//Lazy
		template<typename T1, typename... TS>
		struct TypeBitOr :public TypeBitOr2< T1, TypeBitOr<TS...>> {};
		template<typename T> struct TypeBitOr<T> :public T {};

	}
}