#include <stdio.h>
#include "Compare.h"

int main() 
{
///
/// <”äŠrƒCƒ“ƒXƒ^ƒ“ƒX‚Ìì¬@‚±‚±‚©‚ç>
///
	
    /// ®”1<intŒ^,intŒ^> 
	Compare<int, int>num1(10, 50);

	/// ®”2<floatŒ^,floatŒ^>
	Compare<float, float>num2(75.0f, 25.0f);

	/// ®”3<doubleŒ^,doubleŒ^>
	Compare<double, double>num3(342.5, 575.1);

	/// ®”4<intŒ^,floatŒ^>
	Compare<int, float>num4(110, 95.0f);

	/// ®”5<intŒ^,doubleŒ^>
	Compare<int, double>num5(64, 130);

	/// ®”6<floatŒ^,doubleŒ^>
	Compare<float, double>num6(694.0f, 948.5);

///
/// <”äŠrƒCƒ“ƒXƒ^ƒ“ƒX‚ÌéŒ¾@‚±‚±‚Ü‚Å>
///

///===========================================================================================================================================

///
/// <“ñ‚Â‚Ì’l‚ğ”äŠr‚µ‚ÄA¬‚³‚¢’l‚ğo—Í‚·‚éˆ—@‚±‚±‚©‚ç>
///

	/// <intŒ^,intŒ^>
	printf("intŒ^“¯m‚Ì”äŠrŒ‹‰Ê : %d\n",num1.Min());

	/// <floatŒ^,floatŒ^>
	printf("\nfloatŒ^“¯m‚Ì”äŠrŒ‹‰Ê : %f\n",num2.Min());

	/// <doubleŒ^,doubleŒ^>
	printf("\ndoubleŒ^“¯m‚Ì”äŠrŒ‹‰Ê : %lf\n", num3.Min());

	/// <intŒ^,floatŒ^>
	printf("\nintŒ^,floatŒ^‚Ì”äŠrŒ‹‰Ê : %f\n", (float)num4.Min());

	/// <intŒ^,doubleŒ^> 
	printf("\nintŒ^,doubleŒ^‚Ì”äŠrŒ‹‰Ê : %f\n", (double)num5.Min());

	/// <floatŒ^,doubleŒ^>
	printf("\nfloatŒ^,double‚Ì”äŠrŒ‹‰Ê : %lf\n", (double)num6.Min());

///
/// <“ñ‚Â‚Ì’l‚ğ”äŠr‚µ‚ÄA¬‚³‚¢’l‚ğo—Í‚·‚éˆ—@‚±‚±‚Ü‚Å>
///


	return 0;

} 