#pragma once

#include<Core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsVoid: public False_{};
		template<> struct IsVoid<void>:public True_{};
		template<> struct IsVoid<const void> :public True_ {};
		template<> struct IsVoid<volatile void> :public True_ {};
		template<> struct IsVoid<const volatile void> :public True_ {};

		template<typename T> using IsVoid_t = typename IsVoid<T>::type;
#define IsVoid_v(T)   IsVoid<T>::value
#define NotVoid_v(T)  (!IsVoid<T>::value)
	}
}