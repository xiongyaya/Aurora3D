#pragma once

#include<Core/mpl/ingore_t.h>

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
	}
}