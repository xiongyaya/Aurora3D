#pragma once

#include<Core/mpl/container/slist_decl.h>
#include<Core/mpl/container/node_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename S>
		struct SlistFront
		{
			static_assert(S::length != 0, "Slist length can't be zero.");
			typedef typename S::head head;
			typedef typename head::type type;
		};

		template<typename S, typename T>
		struct SlistPushFront
		{
			typedef Slist_<Node_<T, typename S::head>> type;
		};

		template<typename S> 
		struct SlistPopFront
		{
			static_assert(S::length != 0, "Slist length can't be zero.");
			typedef Slist_<typename S::next> type;
		};
	}
}