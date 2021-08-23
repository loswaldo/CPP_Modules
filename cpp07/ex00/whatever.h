//
// Created by shaurmyashka on 8/23/21.
//

#ifndef CPP00_WHATEVER_H
#define CPP00_WHATEVER_H

template<typename T>

const T& max(const T& a, const T& b)
{
	return (a > b) ? a : b;
}
template<typename T>

const T& min(const T& a, const T& b)
{
	return (a < b) ? a : b;
}
template<typename T>

void swap(T&a, T&b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
	b = tmp;
}

#endif //CPP00_WHATEVER_H
