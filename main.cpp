#include <iostream>
#include <random>

#include "dice.h"
#include "chips.h"

using namespace std;

int main()
{
  int GuessNumber;
  int DiceNumber;

  double BetAmount;

  bool Correct = false;
  bool Playing = true;

  Chips Player = Chips(100);
  
  for(int Counter = 0; Counter < 10; Counter++)
    {
      DiceNumber = Dice::RollDie();

      cout << DiceNumber << endl;
      
      
    }
  
  return 0;
}