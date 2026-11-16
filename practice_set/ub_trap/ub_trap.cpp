#include<iostream>

int compute_hash_mock(){
    int hash = 100;
    return hash;
}

int main(){
    int i {100};
    int hash {compute_hash_mock()};
    int complete_hash = hash + i;
    std::cout<<complete_hash<<'\n';
    return 0;
}