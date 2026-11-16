#include <iostream>

int main(){
    
    [[maybe_unused]] int cache_line_bytes { 64 };

    int i {34};
    float f { 3.41f };
    double d {12312.1123123};
    char c {'a'};
    
    bool b { true };
    
    std::string s {"Hello World"};

    std::cout<<i<<'\n';
    std::cout<<f<<'\n';
    std::cout<<d<<'\n';
    std::cout<<c<<'\n';
    std::cout<<b<<'\n';
    std::cout<<s<<'\n';


    return 0;
}