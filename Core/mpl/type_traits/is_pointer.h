#pragma once

#include<Core/mpl/bool_.h>
#include<Core/mpl/type_traits/remove_cv.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T> struct IsPointerHelper :public False_ {};
			template<typename T> struct IsPointerHelper<T*> :public True_ {};
		}

		template<typename T> struct IsPointer :public detail::IsPointerHelper< typename RemoveCV<T>::type> {};
#define IsPointer_v(T)     IsPointer<T>::value
#define NotPointer_v(T)   (!IsPointer<T>::value)
		
	}
}