#include<iostream>
#include <string>
#include <cstdint>


int main(){

  [[maybe_unused]] const float gravity {9.8f};

  int i {34};
  float f {3.14f};
  double d {234234.234234};
  char c {'a'};
  bool b {true};
  std::string greet {"Hello"};
  std::int16_t i1 {110};
  int f_to_i { static_cast<int>(f) };
  double scientific_number { 9.11e-31};

  std::cout<<i<<'\n';
  std::cout<<f<<'\n';
  std::cout<<d<<'\n';
  std::cout<<c<<'\n';
  std::cout<<b<<'\n';
  std::cout<<greet<<'\n';
  std::cout<<i1<<'\n';
  std::cout<<f_to_i<<'\n';
  std::cout<<scientific_number<<'\n';

  return 0;
}
