#ifndef CHIPS_H
#define CHIPS_H

class Chips
{
  private:
  int ChipsAmount;
  int BetAmount;

  public:
  Chips(int UserChips) : ChipsAmount(UserChips) 
  {};

  public:
  void PlaceBets(int Amount);

  void AddChips();

  void RemoveChips();

  int ChipAmount();
};

#endif