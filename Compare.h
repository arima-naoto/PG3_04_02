#pragma once
#include <stdio.h>

/// <summary>
/// テンプレートの作成 
/// </summary>
/// <typeparam name="Type1">テンプレート1</typeparam>
/// <typeparam name="Type2">テンプレート2</typeparam>
template<typename Type1, typename Type2>

/// <summary>
/// 比較クラスの作成
/// </summary>
class Compare 
{
private://メンバ変数

	/// <summary>
	/// テンプレート1の整数X
	/// </summary>
	Type1 numX;

	/// <summary>
	/// テンプレート2の整数Y
	/// </summary>
	Type2 numY;

public://メンバ関数

	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="numX">テンプレート1の整数X</param>
	/// <param name="numY">テンプレート2の整数Y</param>
	Compare(Type1 numX, Type2 numY) : numX(numX), numY(numY) {}

	/// <summary>
	/// 比較メンバ関数
	/// </summary>
	/// <returns></returns>
	Type1 Min() const {
		
		//もし整数Xが整数Yより小さければ
		if (numX < numY) 
		{
			//整数Xを返す
			return static_cast<Type1>(numX);
		}
		else//そうでなければ
		{
			//整数Yを返す
			return static_cast<Type1>(numY);
		}
	}
};