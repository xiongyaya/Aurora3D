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
using namespace Aurora3D::mpl;

inline EnableIf_t<true, int> TestEnableIf()
{
	return 0;
}


template<typename T>
struct Wrap {};


template< typename T  >
struct Lambda
{
	typedef False_ type;
};

template< template<typename T1> typename T, typename P >
struct Lambda< T<P> > { typedef int type; };

inline void TestMpl()
{
	cout << typeid(Lambda <Wrap<int> >::type).name() << endl;

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

	cout << "value£º" << Or<False_>::value << endl;
	cout << "value£º" << Or<False_, False_>::value << endl;
	cout << "value£º" << Or<False_, True_>::value << endl;
	cout << "value£º" << Or<False_, False_, False_>::value << endl;
	cout << "value£º" << Or<False_, False_, True_>::value << endl;

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
	cout << BitCompose<7,0,3,5>::value << endl;
	cout << TypeBitCompose< Int_<0>, Int_<1>, Int_<2>, Int_<3> >::value << endl;

	cout << "==== BitSequence ====" << endl;
	cout << BitSequence<1101>::value << endl;
	cout << BitSequence<111>::value << endl;
	cout << BitSequence<11>::value << endl;
	cout << BitSequence<1>::value << endl;

	cout << "==== BitOr/BitAnd ====" << endl;
	cout << BitOr<1, 2, 4, 7>::value << endl;
	cout << TypeBitOr< Int_<1>, Int_<2>, Int_<4>, Int_<8> >::value << endl;

	cout << BitAnd<15, 7>::value << endl;
	cout << TypeBitAnd< Int_<7>, Int_<15>, Int_<1>>::value << endl;


	cout << "==== If ====" << endl;
	cout << IsIntegral<int>::value << endl;
	cout << IsIntegral<float>::value << endl;
	cout << If<IsIntegral<int>, True_, False_>::value << endl;
	cout << If<IsIntegral<float>, True_, False_>::value << endl;
	cout << BoolIf<false, True_, False_>::value << endl;
	cout << BoolIf<true, True_, False_>::value << endl;

	//cout << "value" << Max<int, 1>::value << endl;
	//cout << "value" << Max<int, 1, 2>::value << endl;
	
	//cout << "value" << TypeMax<Int_<1> >::value << endl;
	//cout << "value" << TypeMax<Int_<1>, Int_<2>>::value << endl;



}