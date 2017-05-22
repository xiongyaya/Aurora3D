#pragma once

#include<core/mpl/sizet_.h>
#include<Core/mpl/arithmetic_max.h>
namespace Aurora3D
{
	namespace mpl
	{
		template<size_t leastAlign, typename First, typename... Others>
		struct AlignUnionType
		{
			static constexpr size_t size = SizetMax<leastAlign, sizeof(First), sizeof(Others)...>::value;
			static constexpr size_t align = SizetMax<alignof(First), alignof(Others)...>::value;
			struct type
			{
				alignas(align) char padding[size];
			};
		};
	}
}