#include <iostream>

int &largerOf(int& x, int& y){
    return (x > y) ? x : y;
}

int main(){
    int x{5};
    int y{9};
    std::cout<<largerOf(x,y)<<'\n';
    return 0;
}