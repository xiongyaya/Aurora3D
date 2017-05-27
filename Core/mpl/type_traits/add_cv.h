#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct AddCV { typedef T const volatile type; };
		template<typename T> using AddCV_t = typename AddCV<T>::type;
	}
}

