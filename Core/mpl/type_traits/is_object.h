#pragma once

#include<Core/mpl/bool_.h>
#include<Core/mpl/logic_or.h>
#include<Core/mpl/type_traits/is_scalar.h>
#include<Core/mpl/type_traits/is_union.h>
#include<Core/mpl/type_traits/is_class.h>
#include<Core/mpl/type_traits/is_array.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsObject :public Or< IsScalar<T>, IsUnion<T>, IsClass<T>, IsArray<T>> {};
#define IsObjectV(T)   (IsObject<T>::value)
#define NotObjectV(T)  (!IsObject<T>::value)
	}
}