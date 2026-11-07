#include<iostream>

int main() {

	int a{ 8 };
	a++;

	const char* string{ "Hello" };

	for (int i = 0; i < 5; i++) {
		const char c = string[i];
		std::cout << c << "\n";
	}

	std::cout << "Hello World\n";
	return 0;
}