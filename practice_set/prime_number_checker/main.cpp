#include <ios>
#include<iostream>

bool is_prime(const int n)
{
  if (n==0 || n == 1)
  {
    return false;
  }
  else if (n== 2 || n == 3)
  {
    return true;
  }
  else if (n % 2 == 0 || n % 3 == 0)
  {
    return false;
  }
  else
  {
    for (int i {5} ; i * i <= n ; i+=6)
    {
      if (n % i ==0 || n%(i+2) == 0)
      {
        return false;
      }
    }

  }
  return true;
}

int main()
{
  std::cout<<std::boolalpha;
  std::cout<<is_prime(10)<<'\n';
  std::cout<<is_prime(11)<<'\n';
  return 0;
}
