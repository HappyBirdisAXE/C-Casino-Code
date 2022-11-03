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
  {};

  public:
  void PlaceBets(int Amount)
  {
    this->BetAmount = Amount;
  }

  void AddChips() 
  {
    std::cout << "Added to your balance: " << BetAmount << std::endl;
    this->ChipsAmount += BetAmount;
  }

  void RemoveChips() 
  {
    std::cout << "Subtracting from your balance: " << BetAmount << std::endl;
    this->ChipsAmount -= BetAmount;
  }

  int ChipAmount()
  {
    return ChipsAmount;
  }
};

#endif