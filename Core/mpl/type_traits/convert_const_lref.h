#pragma once

#include<Core/mpl/type_traits/is_void.h>
#include<Core/mpl/type_traits/add_top_const.h>
#include<Core/mpl/type_traits/add_lvalue_ref.h>
#include<Core/mpl/type_traits/remove_pointer.h>

namespace Aurora3D
{
	namespace mpl
	{
		//void => void
		//NonMemberFunction => NonMemberFunction
		//T    => const T&
		//T&   => const T&
		//T&&  => const T&
		//T*   => const T&
		namespace detail
		{ 
			template<typename T, bool IsVoid = IsVoid_v(T) > struct ConvertConstLRefHelper { typedef AddTopConst_t<AddLValueRef_t<RemovePointer_t<T>>> type; };
			template<typename T> struct ConvertConstLRefHelper<T, true> { typedef void type; };
		}

		//lazy force convert to const T& form
		template<typename T> struct ConvertConstLRef :public detail::ConvertConstLRefHelper<T> {};
		template<typename T> using ConvertConstLRef_t = typename ConvertConstLRef<T>::type;
	}
}