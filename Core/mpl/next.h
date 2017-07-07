#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct Next:public T::next { };
		template<typename T> using Next_t = typename Next<T>::type;
	}
}