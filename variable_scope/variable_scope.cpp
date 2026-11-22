#include<iostream>

namespace Foo{
  int g_x {3};
}

namespace Goo
{
  void doSomething()
  {
    std::cout<<Foo::g_x;
  }
}

int main()
{
 Goo::doSomething();
 return 0;
}
