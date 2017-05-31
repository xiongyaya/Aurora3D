#pragma once

#include<cassert>
#include<Core/math/vector4.h>

using namespace Aurora3D::math;


inline void TestVector()
{
	//================ basic operation =====================
	Vector4 t1(2.4f, 2.5f, 2.6f, 2.7f), t2(2.0f,2.0f,2.0f,2.0f);
	Vector4 plus = t1 + t2;
	cout << " plus:" << plus.ToString() << endl;
	Vector4 minus = t1 - t2;
	cout << " minus:" << minus.ToString() << endl;
	Vector4 mul = t1 * t2;
	cout << " mul:" << mul.ToString() << endl;

	Vector4 div = t1 / t2;
	cout << " div:" << div.ToString() << endl;
	Vector4 mod = t1 % t2;
	cout << " mod:" << mod.ToString() << endl;

	Vector4 intPart = t1.IntPart();
	Vector4 fracPart = t1.FracPart();
	cout << " int:" << intPart.ToString() << " " << fracPart.ToString() << endl;

	Vector4 t3(1u, 2u, 4u, 8u), t4(2u, 2u, 2u, 2u);
	Vector4 bitand = t3 & t4;
	cout << " bitand:" << bitand.ToStringAsUint() << endl;
	Vector4 bitor = t3 | t4;
	cout << " bitor:" << bitor.ToStringAsUint() << endl;
	Vector4 bitreverse = ~t3;
	cout << " bitreverse:" << bitreverse.ToStringAsUint() << endl;
	Vector4 less = t3 < t4;
	cout << " less:" << less.ToStringAsUint() << endl;
	cout << "any4 false:" << less.AnyFalse4() << endl;
	cout << "any4 true:" << less.AnyTrue4() << endl;
	cout << "1,2,3 false:" << less.False3<1, 2, 3>() << endl;
	cout << "0,2,3 false:" << less.False3<0, 2, 3>() << endl;
	cout << "0 true:" << less.True1<0>() << endl;
	cout << "1 true:" << less.True1<1>() << endl;
	cout << "3 true:" << less.True1<3>() << endl;
	Vector4 lessEqual = t3 <= t4;
	cout << " less equal:" << lessEqual.ToStringAsUint() << endl;
	cout << "0,1 true:" << lessEqual.True2<0, 1>() << endl;
	cout << "2,3 false:" << lessEqual.False2<2, 3>() << endl;
	Vector4 greater = t3 > t4;
	cout << " greater:" << greater.ToStringAsUint() << endl;
	Vector4 greaterEq = t3 >= t4;
	cout << " greater equal:" << greaterEq.ToStringAsUint() << endl;

	cout << " true4:" << kVector4AllOneMask.True4() << " " << kVector4XAllOneMask.True4()<<" "<<" "<<kVector4XAllOneMask.AnyTrue4()<<" "<<kVector4Zero.AnyTrue4() << endl;
	cout << " true4:" << kVector4AllOneMask.AnyFalse4() << " " << kVector4XAllOneMask.AnyFalse4() << " " << " " << kVector4XAllOneMask.False4() << " " << kVector4Zero.False4() << endl;
	cout << " true3:" << kVector4XYZAllOneMask.True3() << " " << kVector4XYAllOneMask.True3() << endl;
	cout << " true3:" << kVector4XYAllOneMask.True2() << " " << kVector4XAllOneMask.True2() << endl;
	cout << " true3:" << kVector4XAllOneMask.True1() << " " << kVector4Zero.True1() << endl;
	
	Vector4 inf4(kInfinite), inf3( kInfinite, kInfinite, kInfinite,0u), inf2( kInfinite, kInfinite,0u,0u);
	Vector4 inf_l(0u, 0u, 0u, kInfinite);
	Vector4 inf_l2(0u, 0u, kInfinite, kInfinite);
	Vector4 ninf4(kNegtiveInfinite), ninf3(kNegtiveInfinite, kNegtiveInfinite, kNegtiveInfinite,0u), ninf2(kNegtiveInfinite, kNegtiveInfinite, 0u, 0u);
	cout << " inf4:" << inf4.IsInfinite4() << " " << ninf4.IsInfinite4() <<" "<< inf_l.IsInfinite4()   <<" "<<kVector42PI.IsInfinite4()<< endl;
	cout << " inf3:" << inf3.IsInfinite3() << " " << ninf3.IsInfinite3() << " " << inf_l.IsInfinite3() << " " << kVector42PI.IsInfinite3() << endl;
	cout << " inf3:" << inf2.IsInfinite2() << " " << ninf2.IsInfinite2() << " " << inf_l2.IsInfinite2() << " " << inf_l2.IsInfinite3() << " " << kVector42PI.IsInfinite2() << endl;

	Vector4 nan4(kNaN), nan3(kNaN, kNaN, kNaN, 0u), nan2(kNaN, kNaN, 0u, 0u);
	Vector4 nan_l(0u, 0u, 0u, kNaN), nan_l2(0u, 0u, kNaN, 0u);
	cout << " nan4:" << nan4.IsNaN4() << endl;
	cout << "nan3:" << nan3.IsNaN3() <<" "<<nan_l.IsNaN3()<<" "<<nan_l2.IsNaN3()<< endl;
	cout << "nan3:" << nan2.IsNaN3() << " " << nan_l.IsNaN2() << " " << nan_l2.IsNaN2() << endl;

	Vector4 nearlyone(1.00002f, 0.0f, 0.0f, 0.0000001f);
	Vector4 testNormal(1.0f, 2.0f, 3.0f, 4.0f);
	Vector4 testNormal2(-1.0f, -2.0f, -3.0f, -4.0f);
	cout << testNormal2.Abs().ToString() << endl;
	cout << nearlyone.LengthSQ2().AssignSub(kVector4One).AssignAbs().data[0] << endl;
	cout << nearlyone.LengthSQ2().ToString() << endl;
	cout << testNormal.Normalize4().LengthSQ4().AssignSub(kVector4One).ToString() << endl;
	//cout << nearlyone.IsUnit4() << " " << testNormal.AssignNormalize4().IsUnit4() << endl;

	cout << " test compose dot2,3,4" << endl;
	Vector4 order1(1.0f, 2.f, 3.f, 4.f), order2(5.f, 6.f, 7.f, 8.f);
	cout << order1.PickCompose<1,2, 0, 1>(order2).ToString() << endl;
	cout << order1.Repeat().ToString() << endl;
	cout << order1.Dot2(order2).ToString() << endl;
	cout << order1.Dot3(order2).ToString() << endl;
	cout << order1.Dot4(order2).ToString() << endl;

	Vector4 select0(kAllOneMask, 0u, 0u, 0u), select1(0u, kAllOneMask, 0u, 0u), select2(0u, 0u, kAllOneMask, 0u), select3(0u, 0u, 0u, kAllOneMask);
	cout << " select 0£º" << select0.Select(order1, order2).ToString() << endl;
	cout << " select 0£º" << select1.Select(order1, order2).ToString() << endl;
	cout << " select 0£º" << select2.Select(order1, order2).ToString() << endl;
	cout << " select 0£º" << select3.Select(order1, order2).ToString() << endl;

}
