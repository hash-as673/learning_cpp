#include "io.h"
#include <iostream>

int readNumber()
{
  std::cout<<"Enter a number: ";
  int n {};
  std::cin>>n;
  return n;
}

void writeAnswer(int answer)
{
  std::cout<<"The answer is: "<<answer<<'\n';
}
