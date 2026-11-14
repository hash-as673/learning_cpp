#include <iostream>

void printValue(std::string &y)
{
    std::cout << y << '\n';
}

void printAddresses(int val, int &ref)
{
    std::cout << "The address of the value parameter is: " << &val << '\n';
    std::cout << "The address of the reference parameter is: " << &ref << '\n';
}

void addOne(int &x){
    ++x;
}

int main()
{
    std::string s{"Hello World"};
    printValue(s); // a referece of s is passed, so no expensive class copy
    int x {5};
    std::cout<<"The adderss of x is: "<< &x <<'\n';
    printAddresses(x, x);
    addOne(x);
    std::cout<<x<<'\n';
    return 0;
}


