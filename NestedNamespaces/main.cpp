#include<iostream>

namespace Foo::Goo {
	int add(int x, int y) {
		return x + y;
	}
}

namespace Foo::Hoo {
	int add(int x, int y) {
		return x - y;
	}
}

int main() {
	namespace Active = Foo::Goo;
	std::cout << Active::add(4, 5) << '\n';
	std::cout << Foo::Hoo::add(4, 5) << '\n';
	return 0;
}