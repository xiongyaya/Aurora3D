#pragma once

#include<core/mpl/type_traits/is_void.h>
#include<core/mpl/type_traits/is_lvalue_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		//T       => const T&
		//const T => const T&
		template<typename T, bool VoidOrLRef = IsVoid<T>::value||IsLValueRef<T>::value >
		struct AddConstRef
		{
			typedef const T& type;
		};

		//void, T& => const void, const T&
		template<typename T>
		struct AddConstRef<T, true>
		{
			typedef const T type;
		};
	}
}