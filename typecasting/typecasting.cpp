#include <iostream>

int main() {

	using Distance = double; //type alias

	// Implicit typecasting
	int a{ 10 };
	float b = a ;

	std::cout << "Implicit typecasting: " << b << '\n';

	//Explicit typecasting
	float c{ 3.14f };
	int d{ static_cast<int>(c) };

	std::cout << "Explicit typecasting: " << c << '\n';

	Distance distance = 5.6;
	std::cout << distance << '\n';

	return 0;

}