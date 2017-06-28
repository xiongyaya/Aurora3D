#pragma once

#include<Core/mpl/type_traits/remove_cv.h>
#include<Core/mpl/type_traits/remove_ref.h>
#include<Core/mpl/type_traits/remove_dimension.h>
#include<Core/mpl/type_traits/add_pointer.h>
#include<Core/mpl/type_traits/is_function.h>
#include<Core/mpl/type_traits/is_array.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T, bool IsFunction =IsFunction_v(T), bool IsArray=IsArray_v(T)> 
								 struct DecayHelper { typedef RemoveCV_t<RemoveRef_t<T>> type; };
			template<typename T> struct DecayHelper<T,false, true> { typedef AddPointer_t<RemoveDim_t<RemoveRef_t<T>>> type; };
			template<typename T> struct DecayHelper<T, true, false> { typedef AddPointer_t<T> type; };
		}


		//same as a lvalue expression is used as an rvalue, cv-qualifer is stripped
		//function => function pointer : AddPointer<T>::type;
		//array    => remove dimension and convert to pointer
		//Pointer  => remove low-level const
		//lvalue/rvalue => remove reference
		//lazy 
		template<typename T> struct Decay:public detail::DecayHelper<T>{};
		template<typename T> using  Decay_t = typename Decay<T>::type;
	}
}