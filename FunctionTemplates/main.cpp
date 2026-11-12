#include<iostream>
#include "add.h"

template <typename T>
T max(T x, T y)
{
	return (x > y) ? x : y;
}

auto min(auto x, auto y)
{
	return (x < y) ? x : y;
}

int main()
{
	std::cout << max<int>(1, 2) << '\n';
	std::cout << max < float > (4.3, 2.2) << '\n';
	std::cout << min (2, 3.4) << '\n';
	std::cout << addOne(3) << '\n';
	std::cout << addOne(3.5) << '\n';

	return 0;
}