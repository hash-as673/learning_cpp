#include <iostream>

int main()
{

    std::cout << "Enter first number:" << '\n';
    int millions_of_params{};
    std::cin >> millions_of_params;

    std::cout << "Enter second number:" << '\n';
    int bits_per_weight{};
    std::cin >> bits_per_weight;

    const int total_bits{millions_of_params * 1000000 * bits_per_weight};
    const int total_bytes{total_bits / 8};

    [[maybe_unused]] int alignment_padding_bytes{64};

    std::cout << "Total bits: " << total_bits << '\n';
    std::cout << "Total bytes: " << total_bytes << '\n';

    // int test_narrowing{ 3.14 };

    return 0;
}