#include<iostream>


namespace Foo {
	int g_x{ 1 };
}

int main() {

	[[maybe_unused]] double pi{ 3.14 };
	//[[maybe_unused]] int gravity{ 10 }; // its ok if variable is not used in the program

	int a = 10;
	float f = 3.14;
	char c = 'A';
	bool b = true;
	std::string s = "Hello, World!";
	int i1{12}; // Direct list initialization
	float f1{ 3.14 }; // Direct list initialization

	std::int32_t ii  { 12 };
	constexpr double gravity { 9.8 };
	const double protonCharge{ 1.6e-19 };

	std::cout << a << '\n';
	std::cout << f << '\n';
	std::cout << c << '\n';
	std::cout << b << '\n';
	std::cout << s << '\n';
	std::cout << i1 << '\n';
	std::cout << f1 << '\n';
	std::cout << ii << '\n';
	std::cout << gravity << '\n';
	std::cout << protonCharge << '\n';
	std::cout << Foo::g_x << '\n';
	return 0;
}