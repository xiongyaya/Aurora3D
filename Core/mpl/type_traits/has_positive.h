#pragma once

#include<Core/mpl/type_traits/has_operator.h>
#include<Core/mpl/type_traits/binary_not_match.h>

namespace Aurora3D
{
	namespace mpl
	{
		HAS_FRONT_UNARY_OPERATION_DECL(+, Positive, 0);
	}
}