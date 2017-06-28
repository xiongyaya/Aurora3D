#pragma once

#include<core/mpl/bool_.h>
#include<Core/mpl/type_traits/remove_cv.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T> struct IsMemberPtrHelper :public False_ {};
			template<typename T, typename C> struct IsMemberPtrHelper<T C::*> :public True_ {};
		}
		template<typename T> struct IsMemberPtr :public detail::IsMemberPtrHelper<RemoveCV_t<T>> {};
		
#define IsMemberPtr_v(T)   IsMemberPtr<T>::value
#define NotMemberPtr_v(T)  (!IsMemberPtr<T>::value)
	}
}