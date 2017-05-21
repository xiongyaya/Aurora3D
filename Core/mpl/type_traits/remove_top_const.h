#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct RemoveTopConst           { typedef T  type; };
		template<typename T> struct RemoveTopConst<const T*> { typedef T* type; };
		template<typename T> struct RemoveTopConst<const T&> { typedef T& type; };
		template<typename T> using RemoveTopConst_t = typename RemoveTopConst<T>::type;

	}
}

