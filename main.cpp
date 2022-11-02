#include <iostream>

#include "dice.h"
#include "chips.h"
#include "menu.h"

using namespace std;

int main()
{
  int GuessNumber = 0;
  int DiceNumber = 0;
  int BetAmount = 0;
  int Option = 0;

  bool Correct = false;
  bool Playing = true;

  Chips Player = Chips(100);

  system("clear");
  
  do
    {
      cout << "Player: " << Player.ChipAmount() << endl;
      Menu::PrintMenu();
      cin >> Option;

      switch(Option)
        {
          case 1:
            Menu::PrintGuesspPomptDie();
            cin >> GuessNumber;
            Menu::PrintBetPrompt();
            cin >> BetAmount;
            
            Player.PlaceBets(BetAmount);
            DiceNumber = Dice::RollDie();

            cout << "Die landed on: " << DiceNumber << endl;

            if(GuessNumber == DiceNumber)
              Correct = true;
            else
              Correct = false;

            if(Correct)
              Player.AddChips();
            else
              Player.RemoveChips();
          break;

          case 2:
            Menu::PrintGuesspPomptDouble();
            cin >> GuessNumber;
            Menu::PrintBetPrompt();
            cin >> BetAmount;
            
            Player.PlaceBets(BetAmount);
            DiceNumber = Dice::DoubleRoll();

            cout << "Dice landed on: " << DiceNumber << endl;

            if(GuessNumber == DiceNumber)
              Correct = true;
            else
              Correct = false;

            if(Correct)
              Player.AddChips();
            else
              Player.RemoveChips();
          break;

          case 3:
            Playing = false;
          break;

          default:
            Menu::PrintGuesspPomptDie();
            cin >> GuessNumber;
            Menu::PrintBetPrompt();
            cin >> BetAmount;
            
            Player.PlaceBets(BetAmount);
            DiceNumber = Dice::RollDie();

            cout << "Die landed on: " << DiceNumber << endl;

            if(GuessNumber == DiceNumber)
              Correct = true;
            else
              Correct = false;

            if(Correct)
              Player.AddChips();
            else
              Player.RemoveChips();
          break;
        }

      if(Player.ChipAmount() <= 0)
      {
        cout << "You went broke!" << endl;
        Playing = false;
      }
    } while(Playing);
  
  return 0;
}