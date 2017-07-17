#pragma once

#include<Core/mpl/int_.h>
#include<Core/mpl/binary_op_decl.h>

namespace Aurora3D
{
	namespace mpl
	{
		//T1 + T2 + T3 ...
		A3D_MPL_BINARY_OP_DECL(Add, add);
	}
}