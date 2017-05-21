#pragma once


#include<iostream>
#include<vector>
#include<tuple>
#include<string>
#include<core/mpl/type_traits/add_const.h>
#include<core/mpl/type_traits/add_volatile.h>
#include<core/mpl/type_traits/add_cv.h>
#include<core/mpl/type_traits/add_top_const.h>
#include<core/mpl/type_traits/add_unsigned.h>
#include<core/mpl/type_traits/add_signed.h>
#include<core/mpl/type_traits/remove_top_const.h>
#include<core/mpl/type_traits/is_void.h>
#include<core/mpl/type_traits/is_lvalue_ref.h>
#include<core/mpl/type_traits/is_rvalue_ref.h>
#include<core/mpl/type_traits/is_integral.h>
#include<core/mpl/type_traits/is_float.h>
#include<core/mpl/type_traits/is_arithmetic.h>
#include<core/mpl/type_traits/is_fundamental.h>
#include<core/mpl/type_traits/is_const.h>
#include<core/mpl/type_traits/is_unsigned.h>
#include<core/mpl/type_traits/is_signed.h>
#include<core/mpl/type_traits/is_ref.h>
#include<core/mpl/type_traits/is_class.h>
#include<core/mpl/type_traits/is_union.h>
#include<core/mpl/type_traits/is_abstract.h>
#include<core/mpl/type_traits/is_function.h>
#include<Core/mpl/type_traits/is_member_ptr.h>
#include<Core/mpl/type_traits/is_member_fn_ptr.h>
#include<Core/mpl/type_traits/is_member_obj_ptr.h>
#include<Core/mpl/type_traits/is_pointer.h>
#include<Core/mpl/type_traits/is_array.h>
#include<Core/mpl/type_traits/is_base_of.h>
#include<Core/mpl/type_traits/is_assignable.h>
#include<Core/mpl/type_traits/is_convertible.h>
#include<core/mpl/type_traits/add_lvalue_ref.h>
#include<core/mpl/type_traits/add_rvalue_ref.h>
#include<core/mpl/type_traits/first_template_type.h>
#include<core/mpl/type_traits/remove_cv.h>
#include<core/mpl/type_traits/remove_volatile.h>
#include<core/mpl/type_traits/remove_const.h>
#include<core/mpl/type_traits/remove_ref.h>
#include<core/mpl/type_traits/remove_all_extent.h>
#include<core/mpl/type_traits/remove_extent.h>
#include<core/mpl/type_traits/add_pointer.h>
#include<core/mpl/type_traits/align_of.h>
#include<core/mpl/type_traits/aligned_storage.h>
#include<core/mpl/type_traits/array_dim.h>
#include<core/mpl/type_traits/array_len.h>
#include<core/preprocessor/seq_foreach.h>
#include<core/preprocessor/seq_foreach_2p.h>
#include<core/preprocessor/seq_compose.h>
#include<core/preprocessor/sign.h>
#include<Core/mpl/integral_type.h>
#include<Core/type.h>

#include<boost/type_traits.hpp>

#include"print_type.h"
#include"print_value.h"

using namespace std;
using namespace Aurora3D::mpl;

union TestUnion { int a; };
class TestAbstract { public: virtual void Test() = 0; static void TestStatic() {}; };
class TestDrivied :public TestAbstract { public: virtual void Test() override {};  void VPrintf(int a,...) {} int data; };
class TestFinal final {};
class TestEmpty {};

class TestTrivialConstruct1
{
public:
	TestTrivialConstruct1() :a(0) {}
private:
	int a;
};

enum TestNormalEnum { EnumValue = 0 };
enum class TestEnumClassInt8 :Aurora3D::int8 { value = 1 };
enum class TestEnumClassUint8 :Aurora3D::uint8 { value = 1 };


inline void __stdcall TestStdCall()
{}

inline void __fastcall TestFastCall()
{

}

inline void TestNoExcept() noexcept
{

}

class TestThis
{
	void ThisCall() {}
};

inline void TestTypeTraits()
{
#define TEST_TYPE_VALUE(Type, Judge)         TypeValue<Judge<Type>>{}();
#define TEST_TYPE_CONVERTER(Type, Converter) TypeName<Converter<Type>>{}();
//#define TEST_PRINT_2VALUE(value1, value2, Templ1, Templ2 )    cout<<" value 1:"<< Templ1<value1, value2> <<" value 2:"<<value2<<endl;
//#define TEST_PRINT_2VALUE_BATCH(Func, Seq1, Seq2)    A3D_PP_FOREACH_2P( TEST_PRINT_2VALUE, Seq1, Seq2);  cout << endl;
#define TEST_TYPE_CONVERTER_BATCH(Func)         A3D_PP_FOREACH(TEST_TYPE_CONVERTER, A3D_PP_COMPOSE_EX( (int, const int, volatile int, const volatile int), (A3D_PP_NULL, &, &&, *, [2], [2][3], []), void), Func) cout << endl;
#define TEST_TYPE_CONVERTER_BATCH_SP(Func, Seq) A3D_PP_FOREACH(TEST_TYPE_CONVERTER, Seq, Func) cout << endl;
#define TEST_TYPE_VALUE_BATCH(Func, Seq)        A3D_PP_FOREACH( TEST_TYPE_VALUE, Seq, Func);  cout << endl;

	cout << "  test AddConst " << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddConst);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_const);

	cout << "  test AddVolatile " << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddVolatile);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_volatile);

	cout << "  test AddCV " << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddCV);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_cv);

	cout << "  test AddTopConst " << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddTopConst);
	//TEST_TYPE_CONVERTER_BATCH(RemoveTopConst);

	cout << " test AddPointer" << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddPointer);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_pointer);

	cout << " test AddLValueRef" << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddLValueRef);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_lvalue_reference);

	cout << " tset AddRValueRef" << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddRValueRef);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_rvalue_reference);

	cout << " test AddPointer" << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddPointer);
	//TEST_TYPE_CONVERTER_BATCH(boost::add_pointer);

	cout << " test UnderlyingType/AddUnsigned/AddSigned" << endl;
	//TEST_TYPE_CONVERTER_BATCH_SP(UnderlyingType, (TestEnumClass1, TestEnumClass2, TestNormalEnum, TestAbstract));
	//TEST_TYPE_CONVERTER_BATCH_SP(AddUnsigned, (unsigned char, char, signed char, short, signed short, unsigned short, long int, TestEnumClassInt8, TestEnumClassUint8, TestNormalEnum));
	//TEST_TYPE_CONVERTER_BATCH_SP(AddSigned, (unsigned char, char, signed char, short, unsigned short, long int, TestEnumClassInt8, TestEnumClassUint8, TestNormalEnum));

	cout << " test RemoveRef" << endl;
	//TEST_TYPE_CONVERTER_BATCH(RemoveRef);
	//TEST_TYPE_CONVERTER_BATCH(boost::remove_reference);

	cout << " test RemoveAllExtent" << endl;
	//TEST_TYPE_CONVERTER_BATCH(RemoveAllExtent);

	cout << " test RemoveExtent" << endl;
	//TEST_TYPE_CONVERTER_BATCH(RemoveExtent);
	
	cout << " test ArrayDim" << endl;
	//TEST_TYPE_VALUE_BATCH(ArrayDim, (int, int[3], const int[4], volatile int[4][5], const volatile int[3][4][5], int[], int[][3]));

	cout << " test ArrayLen" << endl;
	//TEST_TYPE_VALUE_BATCH(ArrayLen, (int, int[3], const int[4], volatile int[4][5], const volatile int[3][4][5], int[], int[][3]));

	cout << " test AlignmentOf" << endl;
	//TEST_TYPE_VALUE_BATCH(AlignmentOf, (int, char, short, long long, int[2], int *, long long *, int&&, int&));
	
	cout << " test AlignedStorage" << endl;
	//AlignedStorage<4, 16>::type data;
	//std::aligned_storage<4, 16>::type data2;
	//cout << " data size:" << sizeof(data) << " size2:" << sizeof(data2) << endl;
	//AlignedStorage<4, 8>::type data3;
	//std::aligned_storage<4, 8>::type data4;
	//cout << " data size:" << sizeof(data3) << " size2:" << sizeof(data4) << endl;
	//AlignedStorage<4, 128>::type data5;
	//std::aligned_storage<4, 128>::type data6;
	//cout << " data size:" << sizeof(data5) <<" size2:"<<sizeof(data6) << endl;

	cout << " test IsConst" << endl;
	//TEST_TYPE_VALUE_BATCH(IsConst, (void, char, const int, volatile const float, double const [2], double const * const, double& const, long * const [2] ))

	cout << " test IsUnsigned/IsSigned" << endl;
	//TEST_TYPE_VALUE_BATCH(IsUnsigned, ( char, unsigned char, signed char, signed short, unsigned short, char16_t, char16_t,  char32_t, unsigned long int));
	//TEST_TYPE_VALUE_BATCH(IsSigned, (char, unsigned char, signed char, signed short, unsigned short, char16_t, char16_t, char32_t, unsigned long int));

	cout << " test IsClass/IsUnion/IsAbstract" << endl;
	//TEST_TYPE_VALUE_BATCH(IsClass, (int, void, nullptr_t, IsConst<int>, TestUnion, TestAbstract));
	//TEST_TYPE_VALUE_BATCH(IsUnion, (int, void, nullptr_t, IsConst<int>, TestUnion, TestAbstract));
	//TEST_TYPE_VALUE_BATCH(IsAbstract, (int, void, nullptr_t, IsConst<int>, TestUnion, TestAbstract));
	
	cout << " test IsMemberFnPtr/IsMemberPtr/IsMemberObjPtr" << endl;
	//TestDrivied d;
	//TEST_TYPE_VALUE_BATCH(IsMemberFnPtr, (int,decltype(printf), decltype(TestStdCall),  decltype(&TestDrivied::Test), decltype(&TestDrivied::VPrintf), decltype(&TestDrivied::data), decltype(&TestAbstract::Test)));
	//TEST_TYPE_VALUE_BATCH(IsMemberPtr, (int, decltype(printf), decltype(TestStdCall), decltype(&TestDrivied::Test), decltype(&TestDrivied::VPrintf), decltype(&TestDrivied::data), decltype(&TestAbstract::Test)));
	//TEST_TYPE_VALUE_BATCH(IsMemberObjPtr, (int, decltype(printf), decltype(TestStdCall), decltype(&TestDrivied::Test), decltype(&TestDrivied::VPrintf), decltype(&TestDrivied::data), decltype(&TestAbstract::Test)));

	cout << " test IsBaseOf" << endl;
	cout << " is base of value:" << IsBaseOf<int, int>::value << endl;
	cout << " is base of value:" << IsBaseOf<TestAbstract, TestDrivied>::value << endl;
	cout << " is base of value:" << IsBaseOf<TestDrivied, TestDrivied>::value << endl;
	cout << " is derive from value:" << IsDeriveFrom<int, int>::value << endl;
	cout << " is derive from value:" << IsDeriveFrom<TestDrivied, TestAbstract>::value << endl;
	cout << " is derive from value:" << IsDeriveFrom<TestDrivied, TestDrivied>::value << endl;

	cout << " test IsAssignable/IsConvertible" << endl;
	
	cout << " is RValueAssignable:" << IsRValueAssignable<int,int>::value << endl;
	cout << " is RValueAssignable:" << IsRValueAssignable<int,double>::value << endl;
	cout << " is RValueAssignable:" << IsRValueAssignable<string, double>::value << endl;
	cout << " is RValueAssignable:" << IsRValueAssignable<TestAbstract*, TestDrivied*>::value << endl;
	cout << " is LValueAssignable:" << IsLValueAssignable<int, int>::value << endl;
	cout << " is LValueAssignable:" << IsLValueAssignable<const int, int>::value << endl;

	cout << " is LValueAssignable:" << IsLValueAssignable<int, double>::value << endl;
	cout << " is LValueAssignable:" << IsLValueAssignable<string, double>::value << endl;
	cout << " is LValueAssignable:" << IsLValueAssignable<TestAbstract*, TestDrivied*>::value << endl;
	cout << " is LValueAssignable:" << IsLValueAssignable<TestAbstract, TestDrivied>::value << endl;

	cout << " is Convertible:" << IsConvertible<int, int>::value << endl;
	cout << " is Convertible:" << IsConvertible<const int, int>::value << endl;
	cout << " is Convertible:" << IsConvertible<double, int>::value << endl;
	cout << " is Convertible:" << IsConvertible<double, string>::value << endl;
	cout << " is Convertible:" << IsConvertible<TestDrivied*, TestAbstract*>::value << endl;
	cout << " is Convertible:" << IsConvertible<TestDrivied, TestAbstract>::value << endl;


	cout << " test IsFunction" << endl;
	//auto lamda = []() {};
	//TEST_TYPE_VALUE_BATCH(IsFunction, (decltype(printf), decltype(TestTypeTraits), decltype(lamda), decltype(TestStdCall), decltype(TestFastCall), decltype(TestNoExcept)));
	//TEST_TYPE_VALUE_BATCH(std::is_function, (decltype(printf), decltype(TestTypeTraits), decltype(lamda), decltype(TestStdCall), decltype(TestFastCall)));

	cout << " test IsIntegral" << endl;
	//TEST_TYPE_VALUE_BATCH(IsIntegral, (void, char, char16_t, char32_t, wchar_t, short, int, long long, long, float, double, long double, nullptr_t));

	cout << " test IsFloat" << endl;
	//TEST_TYPE_VALUE_BATCH(IsFloat, (void, char, char16_t, char32_t, wchar_t, short, int, long long, long, const float, double, long double, nullptr_t));

	cout << " test IsArithtic" << endl;
	//TEST_TYPE_VALUE_BATCH(IsArithmetic, (void,int *, float[2], double&, char, const int, volatile long, const volatile int, short, int, long long, long, const float, double, long double, nullptr_t));

	cout << " test IsFundamental" << endl;
	//TEST_TYPE_VALUE_BATCH(IsFundamental, (void, int *, float[2], double&, char, const int, volatile long, const volatile int, short, int, long long, long, const float, double, long double, std::nullptr_t));

	cout << " 5. test IsVoid " << endl;
	//TEST_TYPE_VALUE_BATCH(IsVoid, (void, const void, volatile void, const volatile void, int, char));

	cout << " 7. test IsLValueRef " << endl;
	//TEST_TYPE_VALUE_BATCH(IsLValueRef, (int&&, const int&, volatile int&, const volatile int&, int *&, int& const, int& volatile, int& const volatile));

	cout << " 8. test AddLValueRef " << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddLValueRef);

	cout << " 9. test AddRValueRef " << endl;
	//TEST_TYPE_CONVERTER_BATCH(AddRValueRef);

	cout << " 10. test IsRef " << endl;
	//TEST_TYPE_VALUE_BATCH(IsRef, A3D_PP_COMPOSE((int, int const, int volatile, int const volatile), (A3D_PP_NULL, &, &&, *)));

	cout << " test IsPointer" << endl;
	//TEST_TYPE_VALUE_BATCH(IsPointer, (void, void * const, void*&, int **,void(*)(int), decltype(&TestFastCall), decltype(&TestAbstract::TestStatic) ) );
	
	cout << " test IsArray" << endl;
	//typedef int Int2[2];
	//TEST_TYPE_VALUE_BATCH(IsArray, (void, char volatile [], int *[2], int[2], Int2 const, char[4]));

	
	/*cout << " test __is_pod/IsPod" << endl;
	cout << " void      value:" << __is_pod(void) << endl;
	cout << " nullptr_t value:" << __is_pod(nullptr_t) << endl;
	cout << " int       value:" << __is_pod(int) << endl;
	cout << " float     value:" << __is_pod(float) << endl;
	cout << " function ptr value:" << __is_pod(int(*)(char)) << endl;
	cout << " int*      value:" << __is_pod(int*) << endl;
	cout << " memfnptr  value:" << __is_pod(decltype(&TestDrivied::Test)) << endl;
	cout << " memobjptr value:" << __is_pod(decltype(&TestDrivied::data)) << endl;
	cout << " enum class value:" << __is_pod(TestEnumClassInt8) << endl;
	cout << " enum normal value:" << __is_pod(TestNormalEnum) << endl;
	cout << " union      value:" << __is_pod(TestUnion) << endl;
	cout << " empty class value:" << __is_pod(TestEmpty) << endl;
	cout << " trivial value:" << __is_pod(TestTrivialConstruct1) << endl;
	cout << " trivial value:" << __has_trivial_constructor(TestTrivialConstruct1) << endl;
	cout << " abstract class value:" << __is_pod(TestAbstract) << endl;
	cout << " virtual class value:" << __is_pod(TestDrivied) << endl;
	cout << " array value:" << __is_pod(int[2]) << endl;
	cout << " lref  value:" << __is_pod(int&) << endl;
	cout << " rref  value:" << __is_pod(int&&) << endl;
	cout << " function value:" << __is_pod(void(int)) << endl;*/
	
	cout << " 12. test RemoveConst " << endl;
	//TEST_TYPE_CONVERTER_BATCH(RemoveConst);
	//TEST_TYPE_CONVERTER_BATCH(boost::remove_const);
}
