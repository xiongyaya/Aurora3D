#pragma once

namespace Aurora3D
{
	namespace mpl
	{
		//declare
		template<typename T> struct AddConst;
		template<typename T> struct AddConstRef;
		template<typename T> struct AddCV;
		template<typename T> struct AddLValueRef;
		template<typename T> struct AddRValueRef;
		template<typename T> struct AddVolatile;
		template<typename T> struct AddTopConst;

		template<typename T> struct RemoveConst;
		template<typename T> struct RemoveVolatile;
		template<typename T> struct RemoveCV;
		template<typename T> struct RemoveTopConst;
		template<typename T> struct RemoveExtent;
		template<typename T> struct RemoveAllExtent;

		//lazy
		template<typename T> struct FirstTemplParam{ typedef T type; };
		template<typename T> struct FirstTemplParam< AddConst<T> >       :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< AddConstRef<T> >    :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< AddCV<T> >          :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< AddLValueRef<T> >   :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< AddRValueRef<T> >   :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< AddVolatile<T> >    :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< AddTopConst<T> >    :public FirstTemplParam<T> {};

		template<typename T> struct FirstTemplParam< RemoveConst<T> >    :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< RemoveVolatile<T> > :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< RemoveCV<T> >       :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< RemoveTopConst<T> > :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< RemoveExtent<T> >   :public FirstTemplParam<T> {};
		template<typename T> struct FirstTemplParam< RemoveAllExtent<T> > :public FirstTemplParam<T> {};
	}
}