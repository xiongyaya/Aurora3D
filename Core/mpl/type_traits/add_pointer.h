
#pragma once
#include<Core/mpl/type_traits/remove_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		//pointer to reference ill-legal
		template<typename T> struct AddPointer { typedef  RemoveRef_t<T>* type; };
		template<typename T> using AddPointer_t = typename AddPointer<T>::type;
	}
}