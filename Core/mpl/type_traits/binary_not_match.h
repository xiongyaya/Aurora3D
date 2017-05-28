#pragma once

#include<Core/mpl/type_traits/is_pointer.h>
#include<Core/mpl/type_traits/remove_pointer.h>
#include<Core/mpl/type_traits/is_fundamental.h>

namespace Aurora3D
{
	namespace mpl
	{
		//non-void-pointer can't op with non-int type

		//forbidden
		//fundemental op void*
		//fundemental(no integral) op pointer
		//pointer + pointer
		//+,-
#define BinaryNotMatchAddSub_v(p, t)      \
		(IsPointer_v(p) && IsPointer_v(t))  \
	    || ( IsPointer_v(p) &&  IsFundamental_v(t)  && ( IsVoid_v(RemovePointer_t<p>)|| NotIntegral_v(t)) ) \
		|| ( IsPointer_v(t) &&  IsFundamental_v(p)  && ( IsVoid_v(RemovePointer_t<t>)|| NotIntegral_v(p)) )
		 
		//forbidden
		//fundemental op pointer
		//fundemental op fundemetal (nor one is integral)
		//pointer op pointer
		//*,/,%,>,>=,<,<=,==
#define BinaryNotMatchArithmeticLogic_v(p,t)   ( IsPointer_v(p) && IsPointer_v(t) )                  \
			|| (IsFundamental_v(p) && (IsPointer_v(t) || (IsFundamental_v(t) && !IsIntegral_v(t)) )) \
			|| (IsFundamental_v(t) && (IsPointer_v(p) || (IsFundamental_v(p) && !IsIntegral_v(p)) ))
	}
}

