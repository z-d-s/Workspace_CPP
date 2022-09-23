// C++模板
// C++有两种类型的模板：
// 1、函数模板	(function template):使用泛型参数的函数
// 2、类模板	(class template):使用泛型参数的类

#pragma once
#include <iostream>
using namespace std;

/*==============================函数模板====================================*/
template <typename T>					// 模板参数由关键字typename(也可以使用class)定义  定义一个函数模板，返回两个数中数值大的那一个
inline T Max(const T& a, const T& b)	// 函数有两个参数，类型未定义
{
	return a > b ? a : b;
}