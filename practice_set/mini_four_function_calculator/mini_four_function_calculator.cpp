#include<iostream>

int main()
{
  std::cout<<"Enter a number: ";
  int n1 {};
  std::cin>>n1;

  std::cout<<"Enter another number: ";
  int n2 {};
  std::cin>>n2;

  std::cout<<"Enter a symbol (+, - , * , /): ";
  char s{};
  std::cin>>s;

  if (s == '+')
  {
    std::cout<<n1+n2;
  } 
  else if (s == '-')
  {
    std::cout<<n1-n2;
  }
  else if (s == '*')
  {
    std::cout<<n1 * n2;
  }
  else if (s == '/') 
  {
    std::cout<<n1 / n2;
  }
  else {
    std::cout<<"Invalid operator!";
  }
  return 0;
}
