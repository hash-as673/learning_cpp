#include "layer_math.hpp"
#include <iostream>

int main() {
    const int inputs {read_positive_int()};
    const int outputs {read_positive_int()};
    const int total_ops {estimate_mac_ops(inputs, outputs)};

    std::cout<<"Total MAC operations: "<<total_ops<<'\n';
    return 0;
}
