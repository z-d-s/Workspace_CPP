// C++ģ��
// C++���������͵�ģ�壺
// 1������ģ��	(function template):ʹ�÷��Ͳ����ĺ���
// 2����ģ��	(class template):ʹ�÷��Ͳ�������

#pragma once
#include <iostream>
using namespace std;

/*==============================����ģ��====================================*/
template <typename T>					// ģ������ɹؼ���typename(Ҳ����ʹ��class)����  ����һ������ģ�壬��������������ֵ�����һ��
inline T Max(const T& a, const T& b)	// ��������������������δ����
{
	return a > b ? a : b;
}