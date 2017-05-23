#pragma once

#include<Core/mpl/type_traits/add_rvalue_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> typename AddRValueRef<T>::type Declval();
	}
}