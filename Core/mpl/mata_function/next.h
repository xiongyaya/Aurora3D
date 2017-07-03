#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct Next { typedef typename T::next type; };
		template<typename T> using Next_t = typename Next<T>::type;
	}
}