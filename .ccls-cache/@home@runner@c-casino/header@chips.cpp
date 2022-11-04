#include "chips.hpp"

#include <iostream>

void Chips::PlaceBets(int Amount)
  {
    this->BetAmount = Amount;
  }

void Chips::AddChips() 
  {
    std::cout << "Added to your balance: " << BetAmount << std::endl;
    this->ChipsAmount += BetAmount;
  }

void Chips::RemoveChips() 
  {
    std::cout << "Subtracting from your balance: " << BetAmount << std::endl;
    this->ChipsAmount -= BetAmount;
  }

int Chips::ChipAmount()
  {
    return ChipsAmount;
  }