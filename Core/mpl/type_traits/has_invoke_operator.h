#pragma once

#include<Core/mpl/type_traits/has_operator_type.h>
#include<Core/mpl/type_traits/has_member_fn_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		HAS_MEMBER_FN_DECL(operator(), InvokerOperator);
		//Parameter type and Ret type is match strict, no implicitly convert(e.g. int not match float)
	}
}