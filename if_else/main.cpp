#include<iostream>

int main()
{
  int age {22};
  if (age >= 18)
  {
    std::cout<<"You are eligible to vote!"<<'\n';
  }
  else 
  {
    std::cout<<"You are not eligible to vote!"<<'\n';
  }
  return 0;
}
