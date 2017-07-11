#pragma once
#include<Core/mpl/ingore_t.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T, typename... TArgs>
		struct VArgList
		{
			typedef T type;
			typedef VArgList<TArgs...> next;
		};

		template<typename T>
		struct VArgList<T>
		{
			typedef T type;
			typedef null_t next;
		};
	}
}

