//
// Created by shaurmyashka on 8/23/21.
//

#ifndef CPP00_ITER_H
#define CPP00_ITER_H
#include <iostream>

template<typename T>
void iter(T *a, int len, void (*f)(T))
{
	for (int i = 0; i < len; i++)
	{
		(*f)(a[i]);
	}
}

template<typename T>
void printAdr(T a)
{
	std::cout << a << std::endl;
}
#endif //CPP00_ITER_H
