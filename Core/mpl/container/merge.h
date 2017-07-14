#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/category.h>
#include<Core/mpl/if.h>
#include<Core/mpl/container/zero_length.h>
#include<Core/mpl/container/node.h>
#include<Core/mpl/type_traits/is_same.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			//L::length>1
			template<typename H, int Length, typename PreNode>
			struct ForwardReverse
			{
				typedef Node<typename H::type, PreNode> node;
				typedef typename ForwardReverse<typename H::next, H::length - 1, node>::type type;
			};

			//L is one element
			template<typename H, typename PreNode>
			struct ForwardReverse<H, 1, PreNode> :public H {};

			//L is empty
			template<typename PreNode>
			struct ForwardReverse<Null_, 0, PreNode>
			{
				typedef Null_ type;
			};

			template<typename S1, typename S2, typename Tag> struct MergeImpl {};

			template<typename S1, typename S2>
			struct MergeImpl<S1,S2, RandomCategoryTag>
			{
				
			};

			template<typename S1,typename S2>
			struct MergeImpl<S1,S2, BidirectionalCategoryTag>
			{
				
			};

			template<typename L1,typename L2>
			struct MergeImpl<L1,L2, ForwardCategoryTag>
			{
				struct type
				{
					typedef ForwardCategoryTag tag;
					typedef ForwardReverse<S, S::length, Null_>::type head;
					static const int length = DeriveIf<IsNull_<head>, ZeroLength, head>::length;
				};
			};
		}

		template<typename S1, typename S2> struct Merge:public detail::MergeImpl<S1,S2, typename S::tag> 
		{
			static_assert(IsSame<typename S1::tag, typename S2::tag>::value, "two different container.");
		};
	}
}