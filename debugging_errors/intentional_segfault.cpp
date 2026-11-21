#include <iostream>

void triggerCrash()
{
    int* ptr { nullptr };
    *ptr = 99; // Intentional segmentation fault
}

int main()
{
    std::cout << "1. std::cout before crash (no flush)";
    std::cerr << "2. std::cerr before crash\n";
    triggerCrash();
    return 0;
}
