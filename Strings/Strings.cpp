#include<iostream>
#include<string>
#include <string_view>

int main() {
	
	std::string greet{ "Hello World" };
	std::cout << greet << '\n';

	std::cout << greet.size() << '\n';

	std::cout << "Enter your name: " << '\n';
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	std::string_view s{ "Hello c++!" };
	std::cout << s << '\n';

	return 0;
}