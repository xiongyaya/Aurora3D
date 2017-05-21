#pragma once

#include"../bool_.h"
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
	}
} 