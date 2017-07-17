#pragma once

#include<Core/mpl/null_.h>
#include<Core/mpl/if.h>
#include<Core/mpl/category.h>
#include<Core/mpl/container/node_.h>
#include<Core/mpl/container/length.h>
#include<Core/mpl/container/slist_decl.h>
#include<Core/mpl/short_inner_type_decl.h>

// Slist
namespace Aurora3D
{
	namespace mpl
	{
		// single forward list 
		// PushFront, Front, PopFront O(n) = 1
		// forward iterate O(n) = n
		// backward iterate O(n) = 2n(reverse than do iterate)
		// Length Empty O(n) = 1
		// Reverse O(n) = n
		// Append  O(m,n) = m
		template<typename Head>
		struct Slist_
		{
			typedef ForwardCategoryTag tag;
			typedef Head head;
			//if(Head == Null_)  length =0
			//else  length = Head::length
			static const int length = NodeLength<Head>::value;
		};

		template<typename PostPart, typename S, typename ForePart = Null_>
		struct ListIterator
		{
			typedef ForwardCategoryTag tag;
			typedef S base;
			typedef ForePart forePart;
			typedef ListIterator<PostPart, S, ForePart> type;

			struct next : public ListIterator<NextT<PostPart>, S, Node_<TypeT<PostPart>, ForePart>> {};

			struct deref : public { typedef TypeT<PostPart> type;  };

		};
	}
}