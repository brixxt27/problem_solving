#ifndef UTIL
#define UTIL

#include <vector>
#include <iostream>

template <typename T>
void	printData(T& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << "v[" << i << "] : " << v[i] << std::endl;
	}
}

#endif
