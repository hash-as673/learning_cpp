#include<iostream>

int main()
{
  std::cout<<"Enter height of the tower: "<<'\n';
  double height {};
  std::cin>>height;

  constexpr double g {9.8f};
  
  for(int time {0}; time<=5 ; ++time)
  {
    const double distance_fallen {g * (time * time) / 2 };
    height -= distance_fallen;
    if (height<=0.0)
    {
      std::cout<<"At "<<time<<" seconds, the ball is on the ground"<<'\n';
      break;
    }
    std::cout<<"Currently in "<<time<<" seconds. The ball is at "<<height<<" meters"<<'\n';
  }

  return 0;
}
