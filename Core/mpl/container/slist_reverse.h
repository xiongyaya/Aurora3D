#pragma once

#include<Core/mpl/if.h>
#include<Core/mpl/container/node_.h>
#include<Core/mpl/container/slist_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		// reverse Length elements of L , result is a Slist_
		// if   L::lenght<=1 , return L
		// else return reverse Length elements of L
		template<typename L, int Length>
		struct SlistReverse : public BoolDeriveIf<
			LengthV(L) <= 1, L, 
			Slist_<Type<NodeReverse<Head<L>>>>>{};
	}
}