#pragma once
#include"bool_if.h"
#include"connect.h"

#define A3D_PP_DELAY_INVOKE_IF(Condi, call1, call2, data) \
			A3D_PP_CONNECT( A3D_PP_IF(Condi, call1, call2), data)