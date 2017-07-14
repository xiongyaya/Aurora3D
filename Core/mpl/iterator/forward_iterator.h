#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/category.h>
#include<Core/mpl/ingore_t.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename Node, typename S, typename ForePart=Null_>
		struct ListIterator
		{
			typedef ForwardCategoryTag tag;
			typedef S base;
			typedef ForePart forePart;
			typedef typename Node::type type;
		}; 
	}
}