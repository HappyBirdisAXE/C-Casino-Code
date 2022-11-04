#include "menu.hpp"

#include <iostream>

void Menu::PrintMenu()
  {
    std::cout << 
      "·=======================·\n" <<
      "1. Roll Dice\n" <<
      "2. Double Roll\n" <<
      "3. End Program\n" <<
      "·=======================·\n";
  }

void Menu::PrintGuesspPomptDie()
  {
    system("clear");
    std::cout << "Enter your guess (1-6): ";
  }

void Menu::PrintGuesspPomptDouble()
  {
    system("clear");
    std::cout << "Enter your guess (2-12): ";
  }

void Menu::PrintBetPrompt()
  {
    system("clear");
    std::cout << "Enter your bet: ";
    system("clear");
  }