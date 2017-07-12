#pragma once

#include<Core/mpl/bool_.h>

namespace Aurora3D
{
	namespace mpl
	{
		struct ingore_t {};
		struct Null_ {  };

		template<typename T> struct IsNull_ :public False_ {};
		template<>struct IsNull_<Null_> :public True_ {};

		//distinguish from IsNullptrType_v
#define IsNullT_v(T)  (IsNone<T>::value)
#define NotNullT_v(T) (!IsNone<T>::value)
	}
}