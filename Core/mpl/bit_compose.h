#pragma once

#include<Core/type.h>
#include<Core/mpl/bit_or.h>
#include<Core/mpl/bit_shift_left.h>

namespace Aurora3D
{
	namespace mpl
	{
		//Lazy
		template<uint32 V1, uint32... VS> struct BitCompose
			:public TypeBitOr2< Int_< (1 << V1) >, BitCompose< VS...> > {};
		template<uint32 V> struct BitCompose<V> :Int_< (1 << V) > {};

		//Lazy
		template<typename T1, typename... TS> struct TypeBitCompose
			:public TypeBitOr2< TypeShiftLeft<One_, T1>, TypeBitCompose< TS...> > {};
		template<typename T> struct TypeBitCompose<T> :public TypeShiftLeft< One_, T> {};
	}
}