#include<iostream>

int main() {
	int x {10};
	if (x % 2 == 0) {
		std::cout << "Even Number" << '\n';
	}
	else {
		std::cout << "Odd Number" << '\n';
	}
}