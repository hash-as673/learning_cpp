#include<iostream>

void printValue(int x) {
	std::cout << x << '\n';
} // pass by value

void printStringValue(std::string s) {
	std::cout << s << '\n';
}

int main() {
	int x{ 2 };
	printValue(10);
	printStringValue("Hello World"); // copying classes is expensive
	return 0;
}