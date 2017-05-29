#include<iostream>
using namespace std;

#include"print_type.h"
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_or.h>
#include<Core/mpl/logic_not.h>
#include<Core/mpl/bool_.h>
#include<Core/mpl/arithmetic_max.h>
#include<Core/mpl/arithmetic_min.h>
#include<Core/mpl/type_traits/aligned_union.h>
#include<Core/mpl/int_.h>

using namespace Aurora3D::mpl;



inline void TestMpl()
{
	std::is_polymorphic<int>;
	std::is_base_of<int, int>;
	
	
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

	cout << "value:" << Max<int, 1, 2, 3, 2, 1>::value << endl;
	cout << "value:" << TypeMax<Int_<1>, Int_<2>, Int_<3>, Int_<2>, Int_<1> >::value << endl;
	cout << "value:" << Min<int, 4, 2, 3, 2, 4>::value << endl;
	cout << "value:" << TypeMin<Int_<1>, Int_<2>, Int_<3>, Int_<2>, Int_<1> >::value << endl;

	AlignUnionType<1, int, double, float, long double>::type data;
	cout << typeid(decltype(data)).name() << endl;

	

	//cout << "value" << Max<int, 1>::value << endl;
	//cout << "value" << Max<int, 1, 2>::value << endl;
	
	//cout << "value" << TypeMax<Int_<1> >::value << endl;
	//cout << "value" << TypeMax<Int_<1>, Int_<2>>::value << endl;



}