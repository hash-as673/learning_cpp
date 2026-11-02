

#include <iostream>

int Multiply(int a, int b) {
    return a * b;
}


int main()
{
    int n1, n2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "The product is: " << Multiply(n1, n2) << std::endl;
    return 0;
}

