#ifndef GENNUMBER_H
#define GENNUMBER_H

#include <random>

class Generate
{
  public:
  static int GenerateGuessDie()
  {
    int ReturnValue;
    
    std::random_device Random;
    std::mt19937 mt(Random());
    std::uniform_int_distribution<int> dist(1,6);

    ReturnValue = dist(mt);

    return ReturnValue;
  }

  static int GenerateGuessDouble()
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