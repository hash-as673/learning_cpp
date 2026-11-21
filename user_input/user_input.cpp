#include<iostream>
#include<string>


int main()
{
  std::cout<<"Enter a number:"<<'\n';
  int n {};
  std::cin>>n;

  std::cout<<"Enter a string:"<<'\n';
  std::string s {};
  std::getline(std::cin>>std::ws,s);
  
  std::cout<<n<<'\n';
  std::cout<<s<<'\n';
  return 0;

}
