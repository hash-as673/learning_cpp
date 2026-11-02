#include<iostream>

int main() {
	
	int raw_input{};
	int scale_factor{};
	int zero_point_offset{};
	
	std::cout << "Enter raw input value:" << '\n';
	std::cin >> raw_input;

	std::cout << "Enter scale factor:" << '\n';
	std::cin >> scale_factor;

	std::cout << "Enter zero point offset:" << '\n';
	std::cin >> zero_point_offset;


	std::cout << "Transformed value: " << (raw_input * scale_factor) + zero_point_offset << '\n';
	std::cout << "Centered value (without zero-point): " << raw_input * scale_factor << '\n';
	
	return 0;
}