#pragma once

#include<Core/type.h>
#include<Core/mpl/int_.h>

namespace Aurora3D
{
	namespace mpl
	{
		// ~T
		template<typename T> struct BitNot :public T::bitnot {};
	}
}