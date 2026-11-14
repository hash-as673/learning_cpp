#include<iostream>

int main() {
	int x{ 5 };
	int& ref{ x };
	std::cout << x << '\n';
	std::cout << ref << '\n';

	ref = 7;
	std::cout << "x is :" << x << " and ref is " << ref << '\n';

	return 0;
}