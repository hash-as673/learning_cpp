#include<iostream>
#include <string_view>

int main()
{
  std::string s {"Hello World"};
  std::string_view sv { "How are you"};
  std::cout<<s<<'\n';
  std::cout<<sv<<'\n';
  return 0;
}
