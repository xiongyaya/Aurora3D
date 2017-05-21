#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct RemoveExtent { typedef T type; };
		template<typename T> struct RemoveExtent<T[]> { typedef T type; };
		template<typename T, size_t N> struct RemoveExtent<T[N]> { typedef T type; };
	}
}