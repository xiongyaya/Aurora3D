#pragma once

#include<Core/mpl/type_traits/is_void.h>
#include<Core/mpl/type_traits/add_const.h>
#include<Core/mpl/type_traits/add_lvalue_ref.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T, bool is_void = IsVoid<T>::value > struct AddConstLRefHelper { typedef   const T&  type; };
			template<typename T> struct AddConstLRefHelper<T, true> { typedef void type; };
			template<typename T> struct AddConstLRefHelper<T&, false> { typedef const T&  type; };
			template<typename T> struct AddConstLRefHelper<T&&, false> { typedef  const T&  type; };
		}

		//template<typename T> struct AddConstLRef :public detail::AddLValueRefHelper<T> {};
		template<typename T> struct AddConstLRef :public detail::AddConstLRefHelper<T> {};
	}
}