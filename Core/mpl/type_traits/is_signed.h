#pragma once

#include<core/mpl/bool_.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsSigned :public Bool_< (T(0)>T(-1)) >{};
#define IsSigned_v(T)   IsSigned<T>::value
#define NotSigned_v(T)  (!IsSigned<T>::value)
	}
}