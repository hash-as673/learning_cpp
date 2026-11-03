#include<iostream>
#include "Log.h"

void Log(const char* message) {
	std::cout << message << '\n';
}

int main() {
	InitLog();
	return 0;
}