#pragma once

#include <iostream>
#include <vector>

using namespace std;

const size_t DefaultStackSize = 1024;
template <typename T, size_t n = DefaultStackSize>
class Stack
{
public:
	void Push(const T& element);
	int Pop(T& element);
	
private:
	vector<T> m_Members;
	size_t m_MaxSize = n;
};

template<typename T, size_t n>
inline void Stack<T, n>::Push(const T& element)
{
	if (m_MaxSize <= m_Members.size())
	{
		return;
	}
	m_Members.push_back(element);
}

template<typename T, size_t n>
inline int Stack<T, n>::Pop(T& element)
{
	if (m_Members.empty())
	{
		return -1;
	}
	element = m_Members.back();
	m_Members.pop_back();
	return 0;
}
