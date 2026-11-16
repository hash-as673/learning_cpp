#include "node_info.hpp"
#include <iostream>
#include <cstdint>


void print_build_diagnostics()
{

    std::cout<<"You are using C++ version "<<__cplusplus<<'\n';
    std::cout<<"The size of uint8_t is: "<<sizeof(std::uint8_t)<<'\n';
    std::cout<<"The size of uint32_t is: "<<sizeof(std::uint32_t)<<'\n';
    std::cout<<"The size of uint64_t is: "<<sizeof(std::uint64_t)<<'\n';
    std::cout<<"The size of a pointer is: "<<sizeof(void*)<<'\n';
    
}