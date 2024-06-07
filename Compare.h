#pragma once
#include <stdio.h>

/// <summary>
/// �e���v���[�g�̍쐬 
/// </summary>
/// <typeparam name="Type1">�e���v���[�g1</typeparam>
/// <typeparam name="Type2">�e���v���[�g2</typeparam>
template<typename Type1, typename Type2>

/// <summary>
/// ��r�N���X�̍쐬
/// </summary>
class Compare 
{
private://�����o�ϐ�

	/// <summary>
	/// �e���v���[�g1�̐���X
	/// </summary>
	Type1 numX;

	/// <summary>
	/// �e���v���[�g2�̐���Y
	/// </summary>
	Type2 numY;

public://�����o�֐�

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	/// <param name="numX">�e���v���[�g1�̐���X</param>
	/// <param name="numY">�e���v���[�g2�̐���Y</param>
	Compare(Type1 numX, Type2 numY) : numX(numX), numY(numY) {}

	/// <summary>
	/// ��r�����o�֐�
	/// </summary>
	/// <returns></returns>
	Type1 Min() const {
		
		//��������X������Y��菬�������
		if (numX < numY) 
		{
			//����X��Ԃ�
			return static_cast<Type1>(numX);
		}
		else//�����łȂ����
		{
			//����Y��Ԃ�
			return static_cast<Type1>(numY);
		}
	}
};