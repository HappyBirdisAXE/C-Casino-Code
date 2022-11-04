#include <iostream>

#include "header/dice.hpp"
#include "header/chips.hpp"
#include "header/menu.hpp"
#include "header/gennumber.hpp"

using namespace std;

int main()
{
  system("clear"); // Clear Console
  /////////////////////////////////
  int GuessNumber = 0;
  int DiceNumber = 0;
  int BetAmount = 0;
  int Option = 0;

  bool Correct = false;
  bool Playing = true;

  Chips Player = Chips(1000);
  
  do
    {
      cout << "Player's chips: " << Player.ChipAmount() << endl;
      Menu::PrintMenu();
      cin >> Option;

      switch(Option)
        {
          case 1:
            Menu::PrintGuesspPomptDie();
            cin >> GuessNumber;
            Menu::PrintBetPrompt();
            cin >> BetAmount;

            if(GuessNumber < 1 || GuessNumber > 6)
            {
              GuessNumber = Generate::GenerateGuessDie();
              cout << "Your guess number was bigger than the numbers of sides on the dice. \n" <<
                "Generating a new number: " << GuessNumber << endl;
            }
            
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

            if(GuessNumber < 2 || GuessNumber > 12)
            {
              GuessNumber = Generate::GenerateGuessDouble();
              cout << "Your guess number was bigger than the numbers of sides on the dice. \n" <<
                "Generating a new number: " << GuessNumber << endl;
            }
            
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