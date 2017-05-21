#pragma once

#include<type_traits>
#include<core/mpl/if.h>
namespace Aurora3D
{
	namespace mpl
	{
		//T is scalar type return T, otherwise return const T& 
		template<typename T>
		struct Param :
			public TypeIf< std::is_scalar<T>, T, const T&>
		{};

		template<typename T>
		using Param_t = typename Param<T>::type;
	}
}