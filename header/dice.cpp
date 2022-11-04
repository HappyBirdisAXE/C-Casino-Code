#include "dice.hpp"
#include <random>

int Dice::RollDie()
  {
    int ReturnValue;
    
    std::random_device Random;
    std::mt19937 mt(Random());
    std::uniform_int_distribution<int> dist(1,6);

    ReturnValue = dist(mt);

    return ReturnValue;
  }

int Dice::DoubleRoll()
  {
    int ReturnValue;
    
    std::random_device Random;
    std::mt19937 mt(Random());
    std::uniform_int_distribution<int> dist(2,12);

    ReturnValue = dist(mt);

    return ReturnValue;
  }