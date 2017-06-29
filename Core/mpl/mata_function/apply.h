#pragma once

#include<Core/mpl/int_.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<typename MataFnType, typename... Args> 
		struct Apply:public MataFnType::template Apply<Args...> {};
	}
}