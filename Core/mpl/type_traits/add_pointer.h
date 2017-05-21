
#pragma once
#include<Core/mpl/type_traits/remove_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct AddPointer { typedef typename RemoveRef<T>::type* type; };
	}
}