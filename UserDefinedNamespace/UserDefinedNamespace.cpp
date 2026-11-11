#include<iostream>

namespace Foo {
	int doSomething(int x, int y) {
		return x + y;
	}
}

namespace Goo {
	int doSomething(int x, int y) {
		return x - y;
	}
}

void print() {
	std::cout << "Hello World" << '\n';
}

int main() {

	std::cout << Foo::doSomething(4, 5) << '\n';
	std::cout << Goo::doSomething(6, 7) << '\n';
	::print();
	return 0;
}