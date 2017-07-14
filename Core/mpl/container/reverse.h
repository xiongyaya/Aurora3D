#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/category.h>
#include<Core/mpl/if.h>
#include<Core/mpl/container/zero_length.h>
#include<Core/mpl/container/node.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename S, typename Tag> struct ReverseImpl {};

			//L::length>1
			template<typename H, int Length, typename PreNode>
			struct ForwardReverse
			{
				typedef Node<typename H::type, PreNode> node;
				typedef typename ForwardReverse<typename H::next, H::length - 1, node>::type type;
			};

			//L is one element
			template<typename H, typename PreNode>
			struct ForwardReverse<H, 1, PreNode>:public H {};

			//L is empty
			template<typename PreNode>
			struct ForwardReverse<Null_, 0, PreNode>
			{
				typedef Null_ type;
			};

			template<typename S>
			struct ReverseImpl<S, RandomCategoryTag>
			{
				typedef typename S::reverse type;
			};

			template<typename S>
			struct ReverseImpl<S, BidirectionalCategoryTag>
			{
				typedef typename S::reverse type;
			};

			template<typename S>
			struct ReverseImpl<S,ForwardCategoryTag>
			{
				struct type
				{
					typedef ForwardCategoryTag tag;
					typedef ForwardReverse<S, S::length, Null_>::type head;
					static const int length = DeriveIf<IsNull_<head>, ZeroLength, head>::length;
				};
			};
		}
		template<typename S> struct Reverse :public detail::ReverseImpl<S, typename S::tag> {};
	}
}