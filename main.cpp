#include <stdio.h>
#include "Compare.h"

int main() 
{
///
/// <��r�C���X�^���X�̍쐬�@��������>
///
	
    /// ����1<int�^,int�^> 
	Compare<int, int>num1(10, 50);

	/// ����2<float�^,float�^>
	Compare<float, float>num2(75.0f, 25.0f);

	/// ����3<double�^,double�^>
	Compare<double, double>num3(342.5, 575.1);

	/// ����4<int�^,float�^>
	Compare<int, float>num4(110, 95.0f);

	/// ����5<int�^,double�^>
	Compare<int, double>num5(64, 130);

	/// ����6<float�^,double�^>
	Compare<float, double>num6(694.0f, 948.5);

///
/// <��r�C���X�^���X�̐錾�@�����܂�>
///

///===========================================================================================================================================

///
/// <��̒l���r���āA�������l���o�͂��鏈���@��������>
///

	/// <int�^,int�^>
	printf("int�^���m�̔�r���� : %d\n",num1.Min());

	/// <float�^,float�^>
	printf("\nfloat�^���m�̔�r���� : %f\n",num2.Min());

	/// <double�^,double�^>
	printf("\ndouble�^���m�̔�r���� : %lf\n", num3.Min());

	/// <int�^,float�^>
	printf("\nint�^,float�^�̔�r���� : %f\n", (float)num4.Min());

	/// <int�^,double�^> 
	printf("\nint�^,double�^�̔�r���� : %f\n", (double)num5.Min());

	/// <float�^,double�^>
	printf("\nfloat�^,double�̔�r���� : %lf\n", (double)num6.Min());

///
/// <��̒l���r���āA�������l���o�͂��鏈���@�����܂�>
///


	return 0;

} 