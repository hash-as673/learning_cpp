#include <iostream>

void addTen(int* n){
    *n += 10;
}

void printIDNumber(const int* id = nullptr){
    if (id)
    {
        std::cout<<"My ID is:"<<*id<<'\n';
    } else {
        std::cout<<"I dont know my ID\n";
    }
    
}

int main()
{
    int x { 5 };                             // x is an int variable holding 5

    std::cout << x << '\n';                  // prints the value of x: 5

    std::cout << &x << '\n';                 // & is the address-of operator: prints where x lives in memory

    std::cout << *(&x) << '\n';              // &x gives x's address, * follows it back to the object: prints 5

    int* ptr { &x };                         // ptr is a pointer to int, initialized with x's address

    std::cout << *ptr << '\n';               // * dereferences ptr: follows the stored address to x, prints 5

    std::cout << ptr << '\n';                // prints the address stored in ptr, the same as &x

    std::cout << "ptr itself lives at: " << &ptr << '\n'; // ptr is a variable too, so it has its own address

    *ptr = 10;                               // writes through the pointer, changing x to 10

    std::cout << "x is now: " << x << '\n';  // prints 10, since ptr pointed to x

    const int y{10};
    const int* const newptr { &y};
    std::cout<<newptr<<'\n';
    int z {90};
    addTen(&z);
    std::cout<<z<<'\n';
    printIDNumber();
    int g {20};
    printIDNumber(&g);
    return 0;
}