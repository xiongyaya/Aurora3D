#pragma once

#include<core/mpl/type_traits/is_fundamental.h>
#include<core/mpl/logic_not.h>

namespace Aurora3D
{
	namespace mpl
	{
		
		//lazy
		template<typename T> struct IsCompound :Not< IsFundamental<T>> {};

	}
}