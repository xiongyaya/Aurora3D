#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

#include<core/preprocessor/stringize.h>
#include<Core/preprocessor/connect.h>
#include<Core/preprocessor/while.h>
#include<Core/preprocessor/byte_to_uint8.h>
#include<Core/preprocessor/byte_shift_left.h>
#include<Core/preprocessor/byte_less.h>
#include<Core/preprocessor/byte_div.h>
#include<Core/preprocessor/seq_size.h>
#include<Core/preprocessor/uint8_to_bool.h>
#include<Core/preprocessor/uint8_to_byte.h>
#include<Core/preprocessor/uint8_less.h>
#include<Core/preprocessor/uint8_less_equal.h>
#include<Core/preprocessor/uint8_greater.h>
#include<Core/preprocessor/uint8_greater_equal.h>
#include<Core/preprocessor/uint8_equal.h>
#include<Core/preprocessor/uint8_not_equal.h>
#include<Core/preprocessor/uint8_sub_n.h>
#include<Core/preprocessor/uint8_if.h>
#include<Core/preprocessor/uint8_add_n.h>
#include<Core/preprocessor/uint8_div.h>
#include<Core/preprocessor/uint8_mul.h>
#include<Core/preprocessor/uint8_mod.h>
#include<Core/preprocessor/sign.h>
#include<Core/preprocessor/seq_compose.h>
#include<Core/preprocessor/seq_foreach_item.h>
#include<Core/preprocessor/seq_foreach_tuple.h>
#include<Core/preprocessor/while.h>
#include<Core/preprocessor/range_prefix.h>
#include<Core/preprocessor/range_declare.h>
#include<Core/preprocessor/range_wrap.h>
#include<Core/preprocessor/range_call.h>
#include<Core/preprocessor/uint8_comma_if.h>
#include<Core/preprocessor/bool_if.h>
#include<Core/preprocessor/seq_unpack.h>


#define MACRO_TEST(name)  cout << " test " << (#name) << endl; cout <<"         value :"<< (name) << endl;  cout <<"         stringize :"<< A3D_PP_STRINGIZE(name) << endl;
#define NEW_LINE cout<<endl;


//range_call  compose with range_repeat
#define VECTOR_DECLARE(i, index, _) \
template<A3D_PP_RANGE_PREFIX(typename T, 1, i, (, ))> \
struct vector##i{};
A3D_PP_RANGE_CALL(10,100,30, VECTOR_DECLARE, _) 


inline void TestProprecessor()
{	
	cout << "==================== TEST PREPROCESSOR LIB ==============================" << endl;
	cout << "  **** **** 1. sub and add test: **** ****" << endl;
	cout << "stringize :" << A3D_PP_STRINGIZE(A3D_PP_BYTE_SUB((1, 0, 0, 0, 1, 0, 0, 0), (0, 1, 1, 1, 0, 0, 0, 0))) << endl;
	MACRO_TEST(A3D_PP_BYTE_SUB((1, 0, 0, 0, 1, 0, 0, 0),(0, 1, 1, 1, 0, 0, 0, 0)));
	MACRO_TEST(A3D_PP_BYTE_SUB((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 0, 1, 0, 1)));
	MACRO_TEST(A3D_PP_BYTE_INT((0, 0, 0, 0, 1, 0, 0, 0)));
	MACRO_TEST(A3D_PP_SUB(255, 18));
	MACRO_TEST(A3D_PP_SUB(19, 3));
	MACRO_TEST(A3D_PP_BYTE_ADD((0, 0, 0, 1, 0, 0, 1, 1), (0, 0, 0, 1, 0, 0, 1, 0)));
	MACRO_TEST(A3D_PP_ADD(19, 3));
	MACRO_TEST(A3D_PP_ADD(19, 18));
	NEW_LINE;

	cout << "  **** **** 2. div mod and mul: **** ****" << endl;
	MACRO_TEST(A3D_PP_BYTE_DIV((1, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 0, 1, 1, 1)));
	MACRO_TEST(A3D_PP_BYTE_MOD((1, 1, 1, 1, 1,1, 1, 1), (0, 0, 0, 0, 0, 0, 1, 1)));
	MACRO_TEST(A3D_PP_BYTE_MUL((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 0, 1, 1, 1)));
	MACRO_TEST(A3D_PP_DIV(255, 3));
	MACRO_TEST(A3D_PP_DIV(103, 5));
	MACRO_TEST(A3D_PP_DIV(101, 101));
	MACRO_TEST(A3D_PP_DIV(63, 65));
	MACRO_TEST(A3D_PP_MOD(255, 3));    
	MACRO_TEST(A3D_PP_MOD(103, 5));
	MACRO_TEST(A3D_PP_MOD(101, 101));
	MACRO_TEST(A3D_PP_MOD(63, 65));
	MACRO_TEST(A3D_PP_MUL(19, 3));
	MACRO_TEST(A3D_PP_MUL(10, 16));
	NEW_LINE;

	cout << "  **** **** 3. less and equal test: **** ****" << endl;
	MACRO_TEST(A3D_PP_BYTE_EQUAL((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 0, 1, 0, 1)));
	MACRO_TEST(A3D_PP_BYTE_EQUAL((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 1, 0, 0, 0)));
	MACRO_TEST(A3D_PP_EQUAL(255, 16));
	MACRO_TEST(A3D_PP_EQUAL(34, 34));
	MACRO_TEST(A3D_PP_NEQUAL(143, 54));
	MACRO_TEST(A3D_PP_NEQUAL(99, 99));
	MACRO_TEST(A3D_PP_BYTE_LESS((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 0, 1, 0, 1)));  //greater
	MACRO_TEST(A3D_PP_BYTE_LESS((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 1, 0, 0, 0)));  //equal
	MACRO_TEST(A3D_PP_BYTE_LESS((0, 0, 0, 0, 1, 0, 0, 0), (0, 0, 0, 0, 1, 0, 0, 1)));  //less
	MACRO_TEST(A3D_PP_LESS(34, 34));
	MACRO_TEST(A3D_PP_LESS(34, 35));
	MACRO_TEST(A3D_PP_LESS(34, 33));
	MACRO_TEST(A3D_PP_GEQUAL(34, 34));
	MACRO_TEST(A3D_PP_GEQUAL(34, 35));
	MACRO_TEST(A3D_PP_GEQUAL(34, 33));
	MACRO_TEST(A3D_PP_GREATER(103, 54));
	MACRO_TEST(A3D_PP_GREATER(103, 103));
	MACRO_TEST(A3D_PP_GREATER(103, 245));
	MACRO_TEST(A3D_PP_LEQUAL(156, 165));
	MACRO_TEST(A3D_PP_LEQUAL(156, 156));
	MACRO_TEST(A3D_PP_LEQUAL(144, 21));
	NEW_LINE;

	cout << "  **** **** 4. while foreach range compose+foreach: **** ****" << endl;

	cout << "    test  while loop:" << endl;
#define WHILE_CONDI2(depth, down, up) A3D_PP_INT_IF(down, 1, 0)           // down !=0
#define WHILE_LOOP(depth, down, up)  A3D_PP_SUB1(down), A3D_PP_ADD1(up)   //++down, --up
#define WHILE_REPEAT(depth, down, up)    cout <<"       "<<" depth:"<<depth<< " down: " << down << " up: " << up << endl;
	A3D_PP_WHILE(WHILE_CONDI2, WHILE_LOOP, WHILE_REPEAT, 20, 0); //
	cout << A3D_PP_STRINGIZE( A3D_PP_WHILE(WHILE_CONDI2, WHILE_LOOP, WHILE_REPEAT, 20, 0) )<< endl;

	cout << "    test  compose :" << endl;
	cout << "          " <<A3D_PP_STRINGIZE(A3D_PP_COMPOSE((unsigned, signed), (char, short, int, long long))) << endl;
	cout << "          " << A3D_PP_STRINGIZE(A3D_PP_COMPOSE_EX((unsigned, signed), (char, short, int, long long), void)) << endl;
	cout << "          " << A3D_PP_STRINGIZE(A3D_PP_COMPOSE3((unsigned, signed), (char, short, int, long long), (const, volatile, const volatile, A3D_PP_NULL))) << endl;

	cout << "    test  foreach_item" << endl;
#define FOREACH_CALL(it,...) cout<<"          "<<typeid(it).name()<<endl;
#define FOREACH_CALL2(it, ...) cout<<","<<A3D_PP_STRINGIZE(it _ )<<endl;
	A3D_PP_FOREACH_ITEM(FOREACH_CALL, (int, char, short, float));

	cout << "    test  foreach_item + compose" << endl;
	A3D_PP_FOREACH_ITEM(FOREACH_CALL2, A3D_PP_COMPOSE_EX((const, volatile, const volatile), ( && ,  &  , A3D_PP_NULL), &, A3D_PP_NULL,&& ) );

	cout << "    test  foreach_tuple" << endl;
#define TEST_TUPLE(First, Second, ...)   |First,Second,__VA_ARGS__|
	cout << A3D_PP_STRINGIZE(A3D_PP_FOREACH_TUPLE(TEST_TUPLE, ((1, 2, 1), (3, 4, 2), (A3D_PP_NULL, p, 3), (0, A3D_PP_NULL, 4), (1, 1, 4), (2, 3, 4)), -)) << endl;


	cout << "==== test  range  ====" << endl;
	cout << A3D_PP_DIV(5, 2) << endl;
	cout << A3D_PP_STRINGIZE(A3D_PP_RANGE_PREFIX_STEP(typename T, 0, 6, 2, (,))) << endl;
	cout << A3D_PP_STRINGIZE(A3D_PP_RANGE_PREFIX(typename T, 6, 0, (, ))) << endl;
	cout << A3D_PP_STRINGIZE(A3D_PP_RANGE_WRAP(typename T, 6, 0, =ingore_t, (, ))) << endl;
	cout << A3D_PP_STRINGIZE(A3D_PP_RANGE_DECLARE(typedef A, ::type, B, 0, 6, (;))) << endl;
	cout << A3D_PP_STRINGIZE(A3D_PP_RANGE_CHAIN_DECLARE(typedef A, A3D_PP_NULL,  B, 1, 6, (;))) << endl;


	cout << "==== test  seq_unpack ====" << endl;
	//seq as code
	cout << A3D_PP_STRINGIZE(A3D_PP_SEQ_UNPACK((1, 2, 3))) << endl;
	cout << typeid(A3D_PP_SEQ_UNPACK((int))).name() << endl;
	//seq as parameters
#define TEST_UNPACK_PARAMETER(p1,p2,p3) p1 | p2 | p3
	cout << A3D_PP_STRINGIZE(A3D_PP_SEQ_UNPACK_CONNECT(TEST_UNPACK_PARAMETER, (1, A3D_PP_SEQ_UNPACK((2, 3)) )) ) << endl;

	cout << "========================= end preprocessor ==============================" << endl;
}


inline void ProcessTool()
{
	for (int i = 1; i <= 254; ++i)
	{
		printf("#define A3D_PP_RANGE_INNER_CALL_LOOP%d(N, step, call, op, ...)   A3D_PP_RANGE_INNER_CALL_CONNECT(call,(N, %d, __VA_ARGS__))  A3D_PP_RANGE_INNER_CALL_LOOP%d( op(N, step), step, call, op, __VA_ARGS__)\n", i,i,i-1);
	}

	//generate seq_at
	/*for (int i = 0; i <= 126; ++i)
	{
		printf("#define A3D_PP_AT_POS%d(",i);
		for (int j = 0; j <= i; ++j)
		{
			printf("p%d,", j);
		}
		printf("...)  p%d\n", i);
	}*/
	//generate while loop
	//for (int i = 2; i < 256; ++i)
	//{
	//	printf("#define A3D_PP_FOREACH_VALUE%d(seq, call) call##( A3D_PP_AT(seq, %d) ) A3D_PP_FOREACH_VALUE%d(seq, call)\n", i, i-1, i-1);
	//	//printf("#define A3D_PP_RANGE_LOOP%d(content, from, step, op)  A3D_PP_RANGE_CONNECT(content,from),  A3D_PP_RANGE_LOOP%d(content, op(from, step), step, op)\n", i, i-1);
	//	//printf("#define A3D_PP_WHILE2_LOOP_VALUE%d( condi_call, update_call, repeat_call, ...)  A3D_PP_WHILE2_CONNECT_REPARSE( A3D_PP_IF(condi_call(%d, __VA_ARGS__), repeat_call, A3D_PP_WHILE2_BREAK), (%d, __VA_ARGS__))  A3D_PP_IF( condi_call##(%d, __VA_ARGS__), A3D_PP_WHILE2_LOOP_VALUE%d, A3D_PP_WHILE2_BREAK)##(condi_call, update_call, repeat_call, update_call##(%d, __VA_ARGS__))\n", i,i,i,i,i+1, i);
	//}

	//return;
	//int bit2x2[4][2] = {
	//	{ 0,0 },
	//	{ 0,1 },
	//	{ 1,0 },
	//	{ 1,1 }
	//};
	//int bit2x2x2[8][3] = {
	//	{ 0,0,0 },
	//	{ 0,0,1 },
	//	{ 0,1,0 },
	//	{ 0,1,1 },
	//	{ 1,0,0 },
	//	{ 1,0,1 },
	//	{ 1,1,0 },
	//	{ 1,1,1 }
	//};
	//int result[16][3] = { 0 };
	//int result2[64][5] = { 0 };
	//int attr[9][3] = {
	//	{ 8, 0, 0 },   //0
	//	{ 0, 0, 0 },   //1
	//	{ 6, 1, 1 },   //2
	//	{ 5, 2, 1 },   //4
	//	{ 4, 3, 1 },   //8
	//	{ 3, 4, 1 },   //16
	//	{ 2, 5, 1 },   //32
	//	{ 1, 6, 1 },   //64
	//	{ 0, 7, 1 }    //128
	//};
	//int can_shift = 0;
	//int left_zeros = 0;
	//int right_zeros = 0;
	//int bit_wide = 0;
	//for (int i = 0; i < 256; ++i)
	//{
	//	if (i == 0 || i == 1 || i == 2 || i == 4 || i == 8 || i == 16 || i == 32 || i == 64 || i == 128)
	//	{
	//		int index = 0;
	//		int tmp = i;
	//		can_shift = 1;
	//		while (tmp > 0)
	//		{
	//			++index;
	//			tmp = tmp >> 1;
	//		}
	//		left_zeros = attr[index][0];
	//		right_zeros = attr[index][1];
	//		bit_wide = attr[index][2];
	//	}
	//	else {
	//		int tmp = 128;
	//		while (tmp && !(i&tmp))
	//		{
	//			tmp = tmp >> 1;
	//			++left_zeros;
	//		}
	//		tmp = 1;
	//		while (tmp<256 && !(i&tmp))
	//		{
	//			tmp = tmp << 1;
	//			++right_zeros;
	//		}
	//		bit_wide = 8 - left_zeros - right_zeros;
	//	}
	//	printf("#define A3D_PP_BYTE_SHIFT_ATTR_VALUE%d%d%d%d%d%d%d%d  %d,%d,%d,%d\n", (bool)(i & 128), (bool)(i & 64), (bool)(i & 32), (bool)(i & 16), (bool)(i & 8), (bool)(i & 4), (bool)(i & 2), (bool)(i & 1), can_shift, left_zeros, right_zeros, bit_wide);
	//	can_shift = 0;
	//	left_zeros = 0;
	//	right_zeros = 0;
	//	bit_wide = 0;
	//}


	//for (int i = 0; i < 2; ++i) //h
	//{
	//	for (int j = 0; j < 2; ++j) //l
	//	{
	//		for (int k = 0; k < 2; ++k) //h
	//		{
	//			for (int l = 0; l < 2; ++l) //l
	//			{
	//				int outer = i * 2 + j;
	//				int inner = k * 2 + l;
	//				if (outer + inner >3)
	//				{
	//					result[outer * 4 + inner][0] = 1;
	//				}
	//				result[outer * 4 + inner][2] = j^l;
	//				result[outer * 4 + inner][1] = ((i^k)) ^ ((j + l)>1 ? 1 : 0);
	//				printf("#define A3D_PP_BIT2x2_SUB_VALUE%d%d%d%d %d,%d,%d\n", i, j, k, l, result[outer * 4 + inner][0], result[outer * 4 + inner][1], result[outer * 4 + inner][2]);
	//			}
	//		}
	//	}
	//}

	//for (int i = 0; i < 8; i++) //h
	//{
	//	for (int j = 0; j < 8; j++) //l
	//	{
	//		if (bit2x2x2[j][0] == 1 && bit2x2x2[j][1] == 1 && bit2x2x2[j][2] == 1) continue;
	//		if (bit2x2x2[i][0] == 1 && bit2x2x2[i][1] == 1 && bit2x2x2[i][2] == 1) continue;
	//		int carry = 0;
	//		//low 2bit not change
	//		result2[i * 8 + j][4] = bit2x2x2[j][2];
	//		result2[i * 8 + j][3] = bit2x2x2[j][1];
	//		result2[i * 8 + j][2] = bit2x2x2[j][0] ^ bit2x2x2[i][2];
	//		carry = ((bit2x2x2[j][0] + bit2x2x2[i][2]) <= 1 ? 0 : 1);
	//		result2[i * 8 + j][1] = carry ^ bit2x2x2[i][1];
	//		carry = ((carry + bit2x2x2[i][1]) <= 1 ? 0 : 1);
	//		result2[i * 8 + j][0] = carry | bit2x2x2[i][0];
	//		printf("#define A3D_PP_BIT4x4_ADD_VALUE%d%d%d%d%d%d   %d,%d,%d,%d,%d\n", bit2x2x2[i][0], bit2x2x2[i][1], bit2x2x2[i][2], bit2x2x2[j][0], bit2x2x2[j][1], bit2x2x2[j][2], result2[i * 8 + j][0], result2[i * 8 + j][1], result2[i * 8 + j][2], result2[i * 8 + j][3], result2[i * 8 + j][4]);
	//	}
	//}

	//for (int i = 0; i < 256; ++i)
	//{
	//	//printf("#define A3D_PP_SUB_N_VALUE%d(x)   A3D_PP_SUB_ONE(A3D_PP_SUB_N_VALUE%d(x))\n",i,i-1);
	//	printf("#define A3D_PP_BYTE_BOOL_VALUE%d%d%d%d%d%d%d%d   %-3d\n", (bool)(i & 128), (bool)(i & 64), (bool)(i & 32), (bool)(i & 16), (bool)(i & 8), (bool)(i & 4), (bool)(i & 2), (bool)(i & 1), (i>0 ? 1 : 0));
	//}
}



