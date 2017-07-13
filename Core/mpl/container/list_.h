#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/logic_less.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_not_equal.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/if.h>
#include<Core/mpl/choose.h>
#include<Core/mpl/container/length.h>


// ForwardList 
// BiList
namespace Aurora3D
{
	namespace mpl
	{
		//mid node
		template<typename T, typename N>
		struct Node
		{
			typedef T type;
			typedef N next;
			static constexpr int length = N::length + 1;
		};

		//last node
		template<typename T>
		struct Node<T, Null_>
		{
			typedef T type;
			typedef Null_ next;
			static constexpr int length = 1;
		};

		struct ZeroLength { static constexpr int length = 0; };

		// forward list
		// PushFront, Front, PopFront O(n) = 1
		// PushBack,  Back,  PopBack O(n) = n
		// At Insert Avg ( O(n) ) = n/2
		// forward iterate O(n) = n
		// backward iterate O(n) = 2n
		// Length Empty O(n) = 1
		template<typename Head = Null_>  
		struct ForwardList
		{
			typedef ForwardCategoryTag tag;
			typedef Head head;
			//if(Head == Null_)  length =0
			//else  length = Head::length
			static const int length = DeriveIf<IsNull_<Head>, ZeroLength, Head>::length;
		};

		namespace detail
		{
			//List exists and length >1
			template<typename Head, int Length, typename PreNode = Null_>
			struct ListReverseImpl
			{
				static_assert(Length > 0, "List Reverse Length can't less than 1.");
				typedef Node<typename Head::type, PreNode> node;
				typedef typename ListReverseImpl<typename Head::next, Length - 1, node>::type type;
			};

			//last node
			template<typename Head, typename PreNode>
			struct ListReverseImpl<Head, 1, PreNode>
			{
				//first node of reverse list
				typedef Node<typename Head::type, PreNode> type;
			};


			//L1 exists and Length >= 1
			template<typename L1, typename L2, int Length = L1::length>
			struct ListMergeImpl
			{
				typedef typename ListMerge<L1::next, L2, Length - 1>::type next;
				typedef Node<typename L1::type, next> type;
			};

			//L1 last node
			template<typename L1, typename L2>
			struct ListMergeImpl<L1, L2, 1>
			{
				typedef Node<typename L1::type, L2> type;
			};
		}

		// reverse Length L elements , result is a ForwardList
		// if head is Null_, return ForwardList<Null_>
		// else if length ==1, return ForwardList<Node<Head::type,Null_>>
		// else return reverse of length elements of L
		template<typename L, int Length = L::length, typename H = L::head>
		struct ListReverse : public DeriveChoose3<
			IsNull_<H>, Bool_<Length==1>,
			ForwardList<>, L,
			ForwardList <typename detail::ListReverseImpl<H, Length>::type >>{};

		// append L2 to L1, result is a ForwardList
		// if      L1::head ==Null_ return ForwardList<L2::head>
		// else if L2::head ==Null_ return ForwardList<L1::head>
		// else    return ForwardList<L1::head append L2::head>
		template<typename L1, typename L2, int Length = L1::length, typename H1=L1::head, typename H2=L2::head>
		struct ListMerge : public DeriveChoose3<IsNull_<H1>, IsNull_<H2>, L2, L1,
			ForwardList <typename detail::ListMergeImpl<H1, H2, Length>::type >>{};

		template<typename S> struct ListEmpty :public IsNull_<typename S::head> {};

		// A type of bi-directional-list
		// PushFront, PushBack, Front, Back, PopFront, PopBack can be O(n) = 1
		// At best O(n) = 1  worst O(n) = n
		// Length  O(n) = 1
		// iterate from front to back(back to front) best O(n) = n, worest O(n) = 2n
		template<typename Forward = ForwardList<>,
			typename Backward = ForwardList<>,
			int CommonLength = 0>
		struct BiList
		{
			//need sync after big change
			typedef Forward  forward;
			typedef Backward backward;
			static const int common_length = CommonLength;
			static const int length = Forward::length + Backward::length -  CommonLength;
		};


		template<typename S, typename Forward= typename S::forward>
		struct BiListForwardNeedSync :public Less<Length<Forward>, Length<S>> {};

		template<typename S, typename Backward = S::backward>
		struct BiListBackwardNeedSync :public Less<Length<Backward>, Length<S>> {};
		
		
		namespace detail
		{
			//sync element between Head And Tail
			template<typename L1, typename L2, int common_length >
			struct BiListSyncImpl:public 
					ListMerge<L1, ListReverse<L2, L2::length - common_length>>{};
		}


		//if   (UpdateForward  && S::forward::length < S::length ) 
		//     Sync S::forward  from S::backward, return BiList<new_forward, backward, backward::length>
		//elif (!UpdateForward && S::backward::length < S::length) 
		//     Sync S::backward from S::forward,  return BiList<forward, new_backward, forward::length>
		//else return S
		template<typename S, bool UpdateForward, typename Forward=S::forward, typename Backward = S::backward>
		struct BiListSync:public 
			DeriveChoose3< 
				And<BiListForwardNeedSync<S>, Bool_<UpdateForward>>,
				And<BiListBackwardNeedSync<S>, Bool_<!UpdateForward>>,
				BiList<detail::BiListSyncImpl<Forward, Backward,S::common_length>, Backward, Length<Backward>>,
				BiList<Forward, detail::BiListSyncImpl<Backward, Forward, S::common_length>, Length<Forward>>,
				S> {};
	}
}