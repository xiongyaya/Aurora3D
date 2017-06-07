#pragma once


namespace Aurora3D
{
	namespace mpl
	{
		template<typename T>
		struct Identity
		{
			typedef T type;
		};
		template<typename T> using Identity_t = typename Identity<T>::type;
	}
}