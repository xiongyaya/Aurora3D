#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/category.h>

namespace Aurora3D
{
	namespace mpl
	{
		//for type trait
		template<typename S> struct End :public S::end {};
	}
}