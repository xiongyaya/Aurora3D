#pragma once

namespace Aurora3D
{
	namespace mpl 
	{
		//T => T  const
		//T* = T* const, low-level const
		//default const + T&& => T&&
		template<typename T> struct AddConst { typedef T const type; };
	}
}

