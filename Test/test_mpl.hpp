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
	template<typename T,typename InState>
	struct Apply
	{
		typedef typename AddPointer<T>::type type;
		typedef Int_<0> OutState;
	};
};


template<typename T1,typename T2,typename T3>
struct Select3
{
	typedef T3 type;
};

inline void TestMpl()
{
	cout << "==== Placeholder/Lambda/Apply ====" << endl;
	cout << IsPlaceholder<_1>::value << endl;
	cout << IsPlaceholder<_2>::value << endl;
	cout << IsPlaceholder<Arg<17>>::value << endl;
	cout << ContainNPlaceholder<_n>::value << endl;
	cout << ContainNPlaceholder<_1, _2>::value << endl;
	cout << ContainNPlaceholder<_1, _2, _n>::value << endl << endl;;
	
	typedef Apply< Lambda<Add<_1, _2>>, Int_<3>, Int_<4> > L2;
	//typedef Apply< Lambda<Add<_n, _n>>, Int_<12>, Int_<13> > N2;
	typedef Apply< Lambda<Add<_1, _2, _3>>, Int_<3>, Int_<4>, Int_<5> >L3;
	typedef Apply< Lambda<Add<_1, _2, _3, _4>>, Int_<3>, Int_<4>, Int_<5>, Int_<6> >L4;
	typedef Apply< Lambda<Add<_1, Int_<2>>>, Int_<3>> P1;
	typedef Apply< Lambda<Add<_1, _1>>, Int_<3>> P2;

	Apply<AddApply<AddPointer>, int>::type Test = new int;
	Apply<AddApply<Select3>, char, int, int*>::type Test2= new int;

	//AddApply
	cout << Apply< AddApply<Add>, Int_<5>, Int_<3> >::type::value << endl;
	//Lambda
	cout << L2::type::value << endl;
	cout << L3::type::value << endl;
	cout << L4::type::value << endl;
	cout << P1::type::value << endl;
	cout << P2::type::value << endl;
	//cout << N2::type::value << endl;
	//
	cout << Add<Int_<5>, Int_<3> >::type::value << endl;

	cout << (1 << (2 << 3));
	cout << ((1 << 2) << 3);
	cout << "==== Or/And ====" << endl;
	cout << "value��" << Or<False_>::value << endl;
	cout << "value��" << Or<False_, False_>::value << endl;
	cout << "value��" << Or<False_, True_>::value << endl;
	cout << "value��" << Or<False_, False_, False_>::value << endl;
	cout << "value��" << Or<False_, False_, True_>::value << endl<<endl;

	cout << "value��" << And<True_>::value << endl;
	cout << "value��" << And<True_, False_>::value << endl;
	cout << "value��" << And<True_, True_>::value << endl;
	cout << "value��" << And<False_, True_>::value << endl;
	cout << "value��" << And<True_, True_, True_>::value << endl;
	cout << "value��" << And<True_, False_, True_>::value << endl;

	cout << "==== Max/Min ====" << endl;
	cout << "value:" << IntMax<1, 2, 3, 2, 1>::value << endl;
	cout << "value:" << Max<Int_<1>, Sizet_<2>, Int_<3>, Sizet_<2>, Int_<1> >::value << endl;
	cout << "value:" << IntMin<4u, 2, 3, 2, 4>::value << endl;
	cout << "value:" << Min<Int_<3>, Int_<2>, Sizet_<3>, Int_<2>, Int_<1> >::value << endl;
	
	cout << "==== BitCompose ====" << endl;
	cout << IntBitCompose<7,0,3,5>::value << endl;
	cout << BitCompose< Int_<0>, Int_<1>, Int_<2>, Int_<3> >::value << endl;

	cout << "==== BitSequence ====" << endl;
	cout << BitSequence<1101>::value << endl;
	cout << BitSequence<111>::value << endl;
	cout << BitSequence<11>::value << endl;
	cout << BitSequence<1>::value << endl;

	cout << "==== BitOr/BitAnd ====" << endl;
	cout << BitOr< Int_<1>, Int_<2>, Int_<4>, Int_<8> >::value << endl;
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

}