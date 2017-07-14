#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/category.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename S, typename Pos>
		struct RandomIterator 
		{
			typedef RandomCategoryTag tag;
			typedef S base;
			typedef Pos pos;
		};

		
	}
}