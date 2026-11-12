

#include <iostream>

int multiply(int a, int b) 
{
    return a * b;
}

int multiply(int a, int b, int c) 
{
    return a * b * c;
}


int main()
{
    int n1, n2, n3;
    std::cout << "Enter three numbers:" << '\n';
    std::cin >> n1 >> n2 >> n3;
    std::cout << "The product is: " << multiply(n1, n2) << '\n';
    std::cout << "The product is: " << multiply(n1, n2, n3) << '\n';

    return 0;
}

