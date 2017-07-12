#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/int_.h>

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
		struct Node<T, null_t>
		{
			typedef T type;
			typedef null_t next;
			static constexpr int length = 0;
		};


		// a type of bi-directional-list
		// PushFront, PushBack, Front, Back O(n) = 1
		// At O(n) = n
		// Length O(n) = 1
		// iterate from front to back(back to front) best O(n) = n, worest O(n) = 2n
		// PopFront, PopBack best O(n) = 1, worest O(n) = n
		template<typename Head, typename Tail, int CommonLength = 0>
		struct BiList
		{
			//need sync before access
			typedef Head head;
			typedef Tail tail;
			static const int common_length = CommonLength;
		};

		template<typename List, typename PreNode = null_t, int ReverseLength = 0>
		struct ReverseList
		{
			typedef Node<typename List::type, PreNode> node;
			typedef typename ReverseList<typename List::next,
				node, ReverseLength - 1>::type type;
		};

		//last of list but first of reverse_list
		template<typename List, typename PreNode> struct ReverseList<List, PreNode, 0>
		{
			//first node of reverse list
			typedef Node<typename List::type, PreNode> type;
		};

		template<typename L1, typename L2>
		struct ListConnect
		{

		};

		//sync element between Head And Tail
		//Head equals reverse(Tail)
		template<typename Head, typename Tail, int CommonLength = 0>
		struct BiListSync
		{

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