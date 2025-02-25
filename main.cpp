#include <stdio.h>
#include "Compare.h"

int main() 
{
///
/// <比較インスタンスの作成　ここから>
///
	
    /// 整数1<int型,int型> 
	Compare<int, int>num1(10, 50);

	/// 整数2<float型,float型>
	Compare<float, float>num2(75.0f, 25.0f);

	/// 整数3<double型,double型>
	Compare<double, double>num3(342.5, 575.1);

	/// 整数4<int型,float型>
	Compare<int, float>num4(110, 95.0f);

	/// 整数5<int型,double型>
	Compare<int, double>num5(64, 130);

	/// 整数6<float型,double型>
	Compare<float, double>num6(694.0f, 948.5);

///
/// <比較インスタンスの宣言　ここまで>
///

///===========================================================================================================================================

///
/// <二つの値を比較して、小さい値を出力する処理　ここから>
///

	/// <int型,int型>
	printf("int型同士の比較結果 : %d\n",num1.Min());

	/// <float型,float型>
	printf("\nfloat型同士の比較結果 : %f\n",num2.Min());

	/// <double型,double型>
	printf("\ndouble型同士の比較結果 : %lf\n", num3.Min());

	/// <int型,float型>
	printf("\nint型,float型の比較結果 : %f\n", (float)num4.Min());

	/// <int型,double型> 
	printf("\nint型,double型の比較結果 : %f\n", (double)num5.Min());

	/// <float型,double型>
	printf("\nfloat型,doubleの比較結果 : %lf\n", (double)num6.Min());

///
/// <二つの値を比較して、小さい値を出力する処理　ここまで>
///


	return 0;

} 