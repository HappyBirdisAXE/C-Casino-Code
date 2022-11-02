#ifndef DICE_HPP
#define DICE_HPP
#include <random>

class Dice
{
public:
  static int RollDie()
  {
    int ReturnValue;
    
    std::random_device Random;
    std::mt19937 mt(Random());
    std::uniform_int_distribution<int> dist(1,6);

    ReturnValue = dist(mt);

    return ReturnValue;
  }

  static int DoubleRoll()
  {
    int ReturnValue;
    
    std::random_device Random;
    std::mt19937 mt(Random());
    std::uniform_int_distribution<int> dist(2,12);

    ReturnValue = dist(mt);

    return ReturnValue;
  }
};
#endif