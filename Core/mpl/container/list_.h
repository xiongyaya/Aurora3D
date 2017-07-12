#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/logic_less.h>
#include<Core/mpl/logic_and.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/arithmatic_sub.h>
#include<Core/mpl/if.h>
#include<Core/mpl/choose.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/mata_function/identity.h>


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

		struct ZeroLength
		{
			static constexpr int length = 0;
		};

		// forward list
		template<typename Head = Null_, int Length = 0>
		struct ForwardList
		{
			typedef Head head;
			static const int length = Length;
		};


		// a type of bi-directional-list
		// PushFront, PushBack, Front, Back, PopFront, PopBack O(n) = 1
		// At best O(n) = 1  worst O(n) = n
		// Length  O(n) = 1
		// iterate from front to back(back to front) best O(n) = n, worest O(n) = 2n
		template<typename Forward = ForwardList<>,
			typename Backward = ForwardList<>, int CommonLength = 0>
		struct BiList
		{
			//need sync after big change, call BiListSyncHeadTail
			typedef Forward  forward;
			typedef Backward backward;
			static const int common_length = CommonLength;
			static const int length = Forward::length + Backward::length - 2 * CommonLength;
		};

		namespace detail
		{
			//List exists and length >1
			template<typename Head, int Length, typename PreNode = Null_>
			struct ListReverseImpl
			{
				static_assert(Length>0, "List Reverse Length can't less than 1.");
				typedef Node<typename Head::type, PreNode> node;
				typedef typename ListReverseImpl<typename List::next, Length - 1, node>::type type;
			};

			//empty List
			template<int ReverseLength, typename PreNode>
			struct ListReverseImpl<Null_, ReverseLength, PreNode> { typedef Null_ type; };

			//1 node List
			template<typename Head, typename PreNode>
			struct ListReverseImpl<Head, 1, PreNode>
			{
				//first node of reverse list
				typedef Node<typename Head::type, PreNode> type;
			};
		}

		template<typename L, int Length = L::length>
		struct ListReverse:
			detail::ListReverseImpl<L::head, Length, Nu
		{
			
		};
		

		//L1 exists and Length >1
		template<typename L1, typename L2, int Length = L1::length>
		struct ListMerge
		{
			static_assert(Length >=1, "List 1 Length can't be less than 1.");

			typedef typename ListMerge<L1::next, L2, Length - 1>::type next;
			typedef Node<typename L1::type, next> type;
		};

		//L1 not exists
		template<typename L2, int Length>
		struct ListMerge<Null_, L2, Length>
		{
			typedef L2 type;
		};

		//L1 Length = 1
		template<typename L1, typename L2>
		struct ListMerge<L1, L2, 1>
		{
			typedef Node<typename L1::type, L2> type;
		};


		template<typename L> struct ListLength :public Int_<L::length>{};
		template<> struct ListLength<Null_> :public Int_<0> {};


		//Head::length+Tail::length - 2*CommonLength > 0
		template<typename Head, typename Tail, int CommonLength>
		struct NeedUpdate:public Less<Int_<0>, Sub<Add<ListLength<Head>,
			ListLength<Tail>, Int_<CommonLength*2>>>>{};

		namespace detail
		{
			//Update Tail from Head, then have common_length = Head::length 
			template<typename Head, typename Tail, int CommonLength = 0 >
			struct BiListUpdateTail:public
				DeriveIf< And<  Not<IsNull_<Head>>, NeedUpdate<Head,Tail,CommonLength>  >,
					BiList<Head, ListMerge<Tail, ListReverse<Head>
			{
				
			};

			template<typename Head, typename Tail>
			struct BiListUpdateTail
			{

			};
		}
		

		

		
		//sync element between Head And Tail
		template<typename S, bool UpdateHead>
		struct BiListUpdate
		{
			typedef typename S::head head;
			typedef typename S::tail tail;
			static constexpr int different = head::length - S::common_length + tail::length - S::common_length;
			static constexpr bool HeadNeedUpdate = UpdateHead && NotNullT_v(tail) && different > 0;
			static constexpr bool TailNeedUpdate = !UpdateHead && NotNullT_v(head) && different > 0;
			typedef BoolDeriveChoose3< 
				HeadNeedUpdate, TailNeedUpdate,
				detail::BiListUpdateHead<head, tail>, 
				detail::BiListUpdateTail<head, tail>,S> type;
		};





		//push T back of S
		template<typename S, typename T>
		struct ListPushBack
		{
			typedef Node<T, typename S::tail> tail;
			typedef typename S::head head;
			typedef BiList<head, tail, S::common_length> type;
		};

		//push T back of S
		template<typename S, typename T>
		struct ListPushFront
		{
			typedef Node<T, typename S::head> head;
			typedef typename S::tail tail;
			typedef BiList<head, tail, S::common_length> type;
		};

		

	}
}