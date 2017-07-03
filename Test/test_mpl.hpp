#include<iostream>
using namespace std;

#include"print_type.h"
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_or.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/bool_.h>
#include<Core/mpl/arithmetic_max.h>
#include<Core/mpl/arithmetic_min.h>
#include<Core/mpl/int_.h>
#include<Core/mpl/sizet_.h>
#include<Core/mpl/enable_if.h>
#include<Core/mpl/bit_compose.h>
#include<Core/mpl/bit_or.h>
#include<Core/mpl/bit_and.h>
#include<Core/mpl/bit_sequence.h>
#include<Core/mpl/type_traits/is_integral.h>
#include<Core/mpl/mata_function/apply.h>
#include<Core/mpl/mata_function/lambda.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/type_traits/add_pointer.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/transform_vargs.h>
#include"print_type.h"


using namespace Aurora3D::mpl;

inline EnableIf_t<true, int> TestEnableIf()
{
	return 0;
}


template<typename T>
struct Wrap {};


struct AddPointer_Fn
{
	template<typename T>
	struct Apply
	{
		typedef typename AddPointer<T>::type type;
	};
};

inline void TestMpl()
{
	cout << "==== Placeholder/Lambda/Apply ====" << endl;
	cout << IsPlaceholder<_1>::value << endl;
	cout << IsPlaceholder<_2>::value << endl;
	cout << IsPlaceholder<Arg<17>>::value << endl;
	cout << ContainNPlaceholder<_n>::value << endl;
	cout << ContainNPlaceholder<_1, _2>::value << endl;
	cout << ContainNPlaceholder<_1, _2, _n>::value << endl;
	

	//Apply< Lambda<add_pointer<_1>>, int>::
	Apply< Lambda<AddPointer<_1>>, int>::type pint_a;
	Apply< Lambda<AddPointer<float>>, int>::type pfloat_a;
	//Lambda<Add<_1, _2>>::Apply<int, float>::type a;
	typedef TransformTable<AddPointer_Fn, int, float, char, long> TA;
	cout << TA::value << endl;

	//Apply< Lambda<Add<_1, _2>>, Int_<21>, Int_<22> >::type::value;
	int a = 0;
	float b = 0.0f;
	pint_a = &a;
	pfloat_a = &b;
	//test replace_type
	//TypeName<replace_type<const int, int, long>::type>{}();
	//TypeName<replace_type< volatile int, int, long>::type>{}();
	//TypeName<replace_type<const volatile int, int, long>::type>{}();
	//TypeName<replace_type< int&, int, long>::type>{}();
	//TypeName<replace_type<const int&, int, long>::type>{}();
	//TypeName<replace_type<const volatile int&, int, long>::type>{}();
	//TypeName<replace_type<volatile int&, int, long>::type>{}();
	//TypeName<replace_type< int*, int, long>::type>{}();
	//TypeName<replace_type<const int*, int, long>::type>{}();
	//TypeName<replace_type<const volatile int*, int, long>::type>{}();
	//TypeName<replace_type<volatile int*, int, long>::type>{}();
	//TypeName<replace_type<int[10], int, long>::type>{}();
	//TypeName<replace_type<const int[10], int, long>::type>{}();
	//TypeName<replace_type<volatile int[10], int, long>::type>{}();
	//TypeName<replace_type<const volatile int[10], int, long>::type>{}();
	//TypeName<replace_type<int*[10], int, long>::type>{}();
	//TypeName<replace_type<const int*[10], int, long>::type>{}();
	//TypeName<replace_type<volatile int*[10], int, long>::type>{}();
	//TypeName<replace_type<const volatile int*[10], int, long>::type>{}();
	//TypeName<replace_type<int*[10], int*, long>::type>{}();

	cout << "==== Or/And ====" << endl;
	cout << "value£º" << Or<False_>::value << endl;
	cout << "value£º" << Or<False_, False_>::value << endl;
	cout << "value£º" << Or<False_, True_>::value << endl;
	cout << "value£º" << Or<False_, False_, False_>::value << endl;
	cout << "value£º" << Or<False_, False_, True_>::value << endl<<endl;

	cout << "value£º" << And<True_>::value << endl;
	cout << "value£º" << And<True_, False_>::value << endl;
	cout << "value£º" << And<True_, True_>::value << endl;
	cout << "value£º" << And<False_, True_>::value << endl;
	cout << "value£º" << And<True_, True_, True_>::value << endl;
	cout << "value£º" << And<True_, False_, True_>::value << endl;

	cout << "==== Max/Min ====" << endl;
	cout << "value:" << IntMax<1, 2, 3, 2, 1>::value << endl;
	cout << "value:" << Max<Int_<1>, Sizet_<2>, Int_<3>, Sizet_<2>, Int_<1> >::value << endl;
	cout << "value:" << IntMin<4u, 2, 3, 2, 4>::value << endl;
	cout << "value:" << Min<Int_<3>, Int_<2>, Sizet_<3>, Int_<2>, Int_<1> >::value << endl;
	cout << Min_Fn::Apply<Int_<3>, Int_<2>, Sizet_<3>>::value << endl;
	cout << Apply< Min_Fn, Int_<3>, Int_<1>, Sizet_<3>>::value << endl;

	//MinTest< Int_<3>, Int_<2>, Sizet_<3>, Int_<2>, Int_<1>>::value;

	cout << "==== BitCompose ====" << endl;
	cout << IntBitCompose<7,0,3,5>::value << endl;
	cout << BitCompose< Int_<0>, Int_<1>, Int_<2>, Int_<3> >::value << endl;

	cout << "==== BitSequence ====" << endl;
	cout << BitSequence<1101>::value << endl;
	cout << BitSequence<111>::value << endl;
	cout << BitSequence<11>::value << endl;
	cout << BitSequence<1>::value << endl;

	cout << "==== BitOr/BitAnd ====" << endl;
	cout << IntBitOr<1, 2, 4, 7>::value << endl;
	cout << BitOr< Int_<1>, Int_<2>, Int_<4>, Int_<8> >::value << endl;

	cout << IntBitAnd<15, 7>::value << endl;
	cout << BitAnd< Int_<7>, Int_<15>, Int_<1>>::value << endl;


	cout << "==== If ====" << endl;
	cout << If<IsIntegral<int>, True_, False_>::type::value << endl;
	cout << If<IsIntegral<float>, True_, False_>::type::value << endl;
	cout << BoolIf<false, True_, False_>::type::value << endl;
	cout << BoolIf<true, True_, False_>::type::value << endl << endl;

	cout << DeriveIf<IsIntegral<int>, True_, False_>::value << endl;
	cout << DeriveIf<IsIntegral<float>, True_, False_>::value << endl;
	cout << BoolDeriveIf<false, True_, False_>::value << endl;
	cout << BoolDeriveIf<true, True_, False_>::value << endl;

	//cout << "value" << Max<int, 1>::value << endl;
	//cout << "value" << Max<int, 1, 2>::value << endl;
	
	//cout << "value" << TypeMax<Int_<1> >::value << endl;
	//cout << "value" << TypeMax<Int_<1>, Int_<2>>::value << endl;



}