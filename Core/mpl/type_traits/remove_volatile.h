#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct RemoveVolatile             { typedef T type; };
		template<typename T> struct RemoveVolatile<T volatile> { typedef T type; };
		template<typename T> using RemoveVolatile_t = typename RemoveVolatile<T>::type;
	}
}
