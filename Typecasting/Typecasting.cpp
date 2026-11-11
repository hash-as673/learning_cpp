
#include <iostream>
#include<typeinfo>

int main()
{
    int i{ 2 };
    float f = i;
    std::cout << f << '\n';

    std::cout << typeid(f).name() << '\n';
    return 0;
}

