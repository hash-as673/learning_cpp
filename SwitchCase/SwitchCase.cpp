#include<iostream>

int main() {
	int q = 4;

	switch (q) {
	case 1:
		std::cout << "Q1" << '\n';
		break;
	case 2:
		std::cout << "Q2" << '\n';
		break;
	case 3:
		std::cout << "Q3" << '\n';
		break;
	case 4:
		std::cout << "Q4" << '\n';
		break;
	default:
		std::cout << "Invalid Quarter" << '\n';
		break;
	}

}