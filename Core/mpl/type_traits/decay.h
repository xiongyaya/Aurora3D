#pragma once

#include<Core/mpl/type_traits/remove_cv.h>
#include<Core/mpl/type_traits/remove_ref.h>
#include<Core/mpl/type_traits/remove_extent.h>
#include<Core/mpl/type_traits/add_pointer.h>
#include<Core/mpl/type_traits/is_function.h>
#include<Core/mpl/type_traits/is_array.h>

namespace Aurora3D
{
	namespace mpl
	{
		namespace detail
		{
			template<typename T, bool isFunction =IsFunction_v(T), bool isArray=IsArray_v(T)> 
								 struct DecayHelper { typedef RemoveCV_t<RemoveRef_t<T>> type; };
			template<typename T> struct DecayHelper<T,false, true> { typedef AddPointer_t<RemoveExtent_t<RemoveRef_t<T>>> type; };
			template<typename T> struct DecayHelper<T, true, false> { typedef AddPointer_t<T> type; };
		}


		//same as a lvalue expression is used as an rvalue, cv-qualifer is stripped
		//function -> function pointer : AddPointer<T>::type;
		//array    -> AddPointer<RemoveExtent<RemoveReference<T>::type>::type>::type
		//lvalue->rvalue RemoveCV<RemoveReference<T>::type>::type
		//lazy
		template<typename T> struct Decay:public detail::DecayHelper<T>{};
	}
}