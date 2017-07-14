#include<iostream>
#include<vector>
using namespace std;

#include"print_type.h"
#include<Core/mpl/logic_and.h>
#include<Core/mpl/logic_or.h>
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
#include<Core/mpl/arithmatic_mul.h>
#include<Core/mpl/type_traits/is_integral.h>
#include<Core/mpl/mata_function/apply.h>
#include<Core/mpl/mata_function/lambda.h>
#include<Core/mpl/mata_function/placeholder.h>
#include<Core/mpl/type_traits/add_pointer.h>
#include<Core/mpl/arithmatic_add.h>
#include<Core/mpl/type_traits/has_inner_type.h>
#include<Core/mpl/container/vector_.h>
#include<Core/mpl/container/set_.h>

#include<Core/mpl/container/at.h>
#include"print_type.h"
using namespace Aurora3D::mpl;


struct HasType { typedef int type; };
struct NoType{};

template<typename T>
struct TestInnerType {
	//typedef typename T::type1 type1;     //cause error
	typedef typename T::type type;

	template<typename U>
	struct TestInnerFunc
	{
		typedef typename T::type2 type2;   //not cause error
	};


};


inline void TestMpl()
{
	cout << "==== Test type ====" << endl;
	typedef Vector_<int> vector1;
	typedef typename VectorPushBack<vector1, char>::type vector2;
	typedef typename VectorPushFront<vector2, short>::type vector3;
	typedef typename VectorInsert<vector3, 1, unsigned short>::type vector4;
	typedef typename VectorInsert<vector4, 3, unsigned int>::type vector5;
	typedef typename VectorInsert<vector5, 5, unsigned char>::type vector6;
	typedef typename VectorInsert<vector6, 6, float>::type vector7;
	typedef typename VectorPopBack<vector7>::type vector8;
	typedef typename VectorPopFront<vector8>::type vector9;
	typedef typename VectorErase<vector9, 3>::type vector10;
	
	typedef typename At<Vector_<int,char>, Int_<0>>::type elem1;
	NormalTypeName<vector1>{}("original-");
	NormalTypeName<vector2>{}("push back char-");
	NormalTypeName<vector3>{}("push front short-");
	NormalTypeName<vector4>{}("insert 1 ushort-");
	NormalTypeName<vector5>{}("insert 3 uint-");
	NormalTypeName<vector6>{}("insert 5 uchar-");
	NormalTypeName<vector7>{}("insert 6 float-");
	NormalTypeName<vector8>{}("pop back-");
	NormalTypeName<vector9>{}("pop front-");
	NormalTypeName<vector10>{}("erase at 3-");
	NormalTypeName<elem1>{}("at 1-");

	typedef Set_<int, char> set2;
	Set_<int> a;
	//std::string


	cout << "==== Test Macro Define ====" << endl;
#define ATEST 20
	cout << ATEST << endl;
#define ATEST 30
	cout << ATEST << endl;


	cout << "==== HasInnerType ====" << endl;
	cout << HasInnerType<HasType>::value << endl;
	cout << HasInnerType<NoType>::value << endl;


	cout << "==== Placeholder Traits ====" << endl;
	cout << IsPlaceholder<_1>::value << endl;
	cout << IsPlaceholder<_2>::value << endl;
	cout << IsPlaceholder<Arg<17>>::value << endl;
	cout << ContainNPlaceholder<_>::value << endl;
	cout << ContainNPlaceholder<_1, _2>::value << endl;
	cout << ContainNPlaceholder<_1, _2, _>::value << endl << endl;;

	cout << "==== AddApply ====" << endl;
	cout << Apply< AddApply<Add>, Int_<5>, Int_<3> >::type::value << endl;

	cout << "==== Lambda ====" << endl;
	//2
	typedef  Apply<Lambda<Add<_1>>, int1_, int2_> choose21;
	typedef  Apply<Lambda<Add<_2>>, int1_, int2_> choose22;
	//1+2
	typedef  Apply<Lambda<Add<_1, _2>>, int1_, int2_> first21;
	//1+2
	typedef  Apply<Lambda<Add<_, _>>, int1_, int2_> first22;
	//1+2
	typedef  Apply<Lambda<Add<__>>, int1_, int2_> first23;
	//(1+2)+(1*2*3*4) =27
	typedef  Apply<Lambda<Add<Add<_1, _2>, Mul<_1, _2, _3, _>>>, int1_, int2_, int3_, int4_> second21;
	// 1+2+1*2*5 = 13
	typedef  Apply<Lambda<Add<Add<_, _>, Mul<__>>>, int1_, int2_, int5_> second22;
	// 1+2 + 1*2
	typedef  Apply<Lambda<Add<Add<__>, Mul<__>>>, int1_, int2_> second23;
	//1+(2+(3+4+(1+2+3+4+5+6))) = 31
	typedef Apply<Lambda<Add<_1, Add<_2, Add<_3, Add<_4, Add<__>>>>>>, int1_, int2_, int3_, int4_, int5_, int6_> six21;
	//replace vector<_> with type
	typedef typename Apply<Lambda<std::vector<_3>>, int, char, short>::type  int_of_vector;

	cout << choose21::value << endl;
	cout << choose22::value << endl;
	cout << first21::type::value << endl;
	cout << first22::type::value << endl;
	cout << first23::type::value << endl;
	cout << second21::type::value << endl;
	cout << second22::type::value << endl;
	cout << second23::type::value << endl;
	cout << six21::type::value << endl;
	NormalTypeName<int_of_vector>{}("");

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