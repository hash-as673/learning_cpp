#include<iostream>

int main(){
    
    std::cout<<"Enter a number:"<<'\n';
    int x{};
    std::cin>>x;

    std::cout<<"Enter a string:"<<'\n';
    std::string s {};
    getline(std::cin>>std::ws, s);

    std::cout<<x<<'\n';
    std::cout<<s<<'\n';

    return 0;
}