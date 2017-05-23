#pragma once

#include<Core/preprocessor/seq_foreach.h>

namespace Aurora3D
{
	namespace mpl
	{
		template<typename T> struct FirstTemplateType { typedef T type; };

#define FIRST_TEMPLATE_TYPE(TemplateType)                                                           \
		template<typename T> struct TemplateType;                                                   \
		template<typename T> struct FirstTemplateType< TemplateType<T> > :public FirstTemplateType<T> {};

#define TEMPLATE_SET  (AddConst, AddCV, AddLValueRef, AddRValueRef, AddPointer, AddUnsigned, AddVolatile,\
                AddSigned, AddConstLRef,\
				RemoveAllExtent, RemoveConst, RemoveCV, RemoveExtent, RemovePointer, RemoveRef, RemoveTopConst,\
				RemoveVolatile, UnderlyingType)
		A3D_PP_FOREACH(FIRST_TEMPLATE_TYPE, TEMPLATE_SET);
#undef FIRST_TEMPLATE_TYPE
#undef TEMPLATE_SET
	}
}