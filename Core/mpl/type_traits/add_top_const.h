#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//not pointer will not change
		// T* => const T*
		template<typename T> struct AddTopConst     { typedef T type; };
		template<typename T> struct AddTopConst<T*> { typedef const T* type; };
		template<typename T> struct AddTopConst<T&> { typedef const T& type; };
		template<typename T> using AddTopConst_t = typename AddTopConst<T>::type;
	}
}

