#pragma once

#include<core/mpl/type_traits/is_void.h>
#include<core/mpl/type_traits/is_lvalue_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T, bool bool VoidOrLRef = IsVoid<T>::value || IsLValueRef<T>::value > 
								 struct AddConstRefHelper { typedef const T& type; };
			template<typename T> struct AddConstRefHelper<T, true> { typedef const T type; };
		}

		//T       => const T&
		//const T => const T&
		//void, T& => const void, const T&
		template<typename T> struct AddConstRef :public detail::AddConstRefHelper<T> {};
		template<typename T> using AddConstRef_t = typename AddConstRef<T>::type;
	}
}