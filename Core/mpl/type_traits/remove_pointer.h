#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct RemovePointer { typedef T type; };
		template<typename T> struct RemovePointer<T*> { typedef T type; };
		template<typename T> struct RemovePointer<const T*> { typedef T type; };
		template<typename T> struct RemovePointer<volatile T*> { typedef T type; };
		template<typename T> struct RemovePointer<const volatile T*> { typedef T type; };
	}
}
