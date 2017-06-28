#pragma once

#include<Core/mpl/type_traits/has_operator_decl.h>
#include<Core/mpl/type_traits/binary_not_match.h>

namespace Aurora3D
{
	namespace mpl
	{
		//declared operator&(...) function
		HAS_BINARY_OPERATION_DECL(&,  BitAnd, BinaryNotMatchArithmeticLogic_v(left_nocv_t, right_nocv_t));
		//declared operator&=(...) function
		HAS_BINARY_OPERATION_DECL(&=, BitAndAssign, BinaryNotMatchArithmeticLogic_v(left_nocv_t, right_nocv_t));
	}
}