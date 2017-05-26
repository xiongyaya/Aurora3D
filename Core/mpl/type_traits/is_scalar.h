#pragma once

#include<Core/mpl/bool_.h>
#include<Core/mpl/logic_or.h>
#include<Core/mpl/type_traits/is_fundamental.h>
#include<Core/mpl/type_traits/is_pointer.h>
#include<Core/mpl/type_traits/is_member_ptr.h>
#include<Core/mpl/type_traits/is_enum.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct IsScalar :public Or< IsFundamental<T>, IsPointer<T>, IsMemberPtr<T>, IsEnum<T>> {};
		template<typename T> using IsScalar_t = typename IsScalar<T>::type;
#define IsScalar_v(T)   IsScalar<T>::value
#define NotScalar_v(T)  (!IsScalar<T>::value)
	}
} 