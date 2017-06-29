#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/bit_or.h>
#include<Core/mpl/bit_shift_left.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<uint64 V, uint64 S = 0> struct BitSequence
			:public TypeBitOr2< ShiftLeft<V%10, S>, BitSequence<V/10, S+1> > {};

		template<uint64 S> struct BitSequence<0, S> :public Zero_ {};
		template<uint64 V> struct BitSequence<V, 20> :public Zero_ {};
	}
}