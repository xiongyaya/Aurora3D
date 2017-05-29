#pragma once

#include<Core/mpl/type_traits/has_operator_decl.h>
#include<Core/mpl/type_traits/binary_not_match.h>

namespace Aurora3D
{
	namespace mpl
	{
		HAS_BINARY_OPERATION_DECL(|, BitOr, BinaryNotMatchArithmeticLogic_v(left_nocv_t, right_nocv_t));
		HAS_BINARY_OPERATION_DECL(|= , BitOrAssign, BinaryNotMatchArithmeticLogic_v(left_nocv_t, right_nocv_t));
	}
}