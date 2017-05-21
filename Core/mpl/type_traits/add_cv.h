#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct AddCV { typedef T const volatile type; };
	}
}

