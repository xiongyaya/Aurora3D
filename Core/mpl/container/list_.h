#pragma once

#include<Core/mpl/ingore_t.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T, typename N>
		struct Node
		{
			typedef T type; 
			typedef N next;
			static constexpr int length = N::length + 1;
		};


		//default is empty
		template<typename Head, typename Tail, int CommonLength = 0, int HeadLength = Head::length,int TailLength= Tail::length>
		struct BiList
		{
			typedef Head head;
			typedef Tail tail;
			static const int common_length = CommonLength;
			static const int head_length = HeadLength;
			static const int tail_length = TailLength;
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