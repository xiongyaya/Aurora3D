#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct RemoveAllExtent { typedef T type; };
		template<typename T> struct RemoveAllExtent<T[]> :public RemoveAllExtent<T> {};
		template<typename T, size_t len> struct RemoveAllExtent<T[len]> :public RemoveAllExtent<T> {};
		template<typename T> using RemoveAllExtent_t = typename RemoveAllExtent<T>::type;
	}
}

