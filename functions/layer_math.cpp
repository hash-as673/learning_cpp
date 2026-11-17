#include "layer_math.hpp"
#include <iostream>

int read_positive_int(){
    std::cout<<"Enter a positive integer: ";
    int value {};
    std::cin >> value;
    return value;
}

int estimate_mac_ops(int input_neurons, int output_neurons)
{
    return input_neurons * output_neurons;
}