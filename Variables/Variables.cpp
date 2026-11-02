#include<iostream>

int main() {

	[[maybe_unused]] double pi{ 3.14 };
	[[maybe_unused]] int gravity{ 10 }; // its ok if variable is not used in the program

	int a = 10;
	float f = 3.14;
	char c = 'A';
	bool b = true;
	std::string s = "Hello, World!";
	int i1{12}; // Direct list initialization
	float f1{ 3.14 }; // Direct list initialization

	std::cout << a << std::endl;
	std::cout << f << std::endl;
	std::cout << c << std::endl;
	std::cout << b << std::endl;
	std::cout << s << std::endl;
	std::cout << i1 << std::endl;
	std::cout << f1 << std::endl;
	return 0;
}