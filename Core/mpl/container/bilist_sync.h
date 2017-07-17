#pragma once

#include<Core/mpl/if.h>
#include<Core/mpl/container/node_.h>
#include<Core/mpl/container/bilist_decl.h>
#include<Core/mpl/short_inner_type_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//sync head from tail
		//if   S::length > S::headLength return synchoronized Bilist_
		//else return S
		template<typename S, bool SyncHead>
		struct BilistSync :
			public BoolDeriveIf< GreaterV(LengthV(S),HeadLengthV(S)),
			Bilist_<NodeAppendT< HeadT<S>, NodeReverseT<TailT<S>, TailLengthV(S) - LengthV(S)> >,
			TailT<S>, TailLengthV(S)>,S>{};

		//sync tail from head
		//if   S::length > S::tailLength return synchoronized Bilist_
		//else return S
		template<typename S>
		struct BilistSync<S,false>:
			public BoolDeriveIf< GreaterV(LengthV(S), TailLengthV(S)),
			Bilist_<HeadT<S>, NodeAppendT<TailT<S>, NodeReverseT<HeadT<S>, HeadLengthV(S) - LengthV(S)> >,
			HeadLengthV(S)>, S>{};
	}
}