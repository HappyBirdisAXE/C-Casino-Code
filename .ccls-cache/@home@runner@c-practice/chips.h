#ifndef CHIPS_H
#define CHIPS_H

#include <iostream>

class Chips
{
  private:
  int ChipsAmount;
  int BetAmount;

  public:
  Chips(int UserChips) : ChipsAmount(UserChips) 
  {
    std::cout << "User's chips: " << ChipsAmount << std::endl;
  };

  public:
  void PlaceBets(int Amount)
  {
    this->BetAmount = Amount;
  }

  void AddChips() 
  {
    this->ChipsAmount += BetAmount;
  }

  void RemoveChips() 
  {
    this->ChipsAmount -= BetAmount;
  }
};

#endif