#include<iostream>

namespace Foo
{
  int doSomething(int x, int y)
  {
    return x + y;
  }
}

namespace Goo
{
  int doSomething(int x, int y)
  {
    return x - y;
  }
}

int main()
{    
  std::cout<<Foo::doSomething(2,4)<<'\n';
  std::cout<<Goo::doSomething(2,4)<<'\n';
  return 0;
}
