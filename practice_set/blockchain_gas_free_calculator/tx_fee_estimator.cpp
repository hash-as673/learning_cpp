#include <iostream>

int main()
{

    std::cout << "Enter gas limit" << '\n';
    int gas_limit{};
    std::cin >> gas_limit;

    std::cout << "Enter base fee gwei" << '\n';
    int base_fee_gwei{};
    std::cin >> base_fee_gwei;

    std::cout << "Enter priority fee Gwei" << '\n';
    int priority_fee_gwei{};
    std::cin >> priority_fee_gwei;

    int max_fee_per_gas{base_fee_gwei + priority_fee_gwei};
    int total_fee_gwei{gas_limit * max_fee_per_gas};

    std::cout<<"Max fee per gas: "<<max_fee_per_gas<<'\n';
    std::cout<<"Total fee Gwei: "<<total_fee_gwei<<'\n';

    return 0;
}