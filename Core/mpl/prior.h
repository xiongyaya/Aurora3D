#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct Prior { typedef typename T::prior type; };
		template<typename T> using Prior_t = typename Prior<T>::type;
	}
}