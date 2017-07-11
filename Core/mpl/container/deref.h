#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//for type trait
		template<typename T> struct Deref { typedef typename T::type type; };
		template<typename T> using Deref_t = typename Deref<T>::type;
	}
}