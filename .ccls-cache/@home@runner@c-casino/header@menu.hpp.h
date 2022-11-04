#ifndef MENU_H
#define MENU_H

#include <iostream>

class Menu
{
public:
  static void PrintMenu()
  {
    std::cout << 
      "/////////////////////\n" <<
      "1. Roll Dice\n" <<
      "2. Double Roll\n" <<
      "3. End Program\n" <<
      "/////////////////////\n";
  }

  static void PrintGuesspPomptDie()
  {
    system("clear");
    std::cout << "Enter your guess (1-6): ";
  }

  static void PrintGuesspPomptDouble()
  {
    system("clear");
    std::cout << "Enter your guess (2-12): ";
  }

  static void PrintBetPrompt()
  {
    system("clear");
    std::cout << "Enter your bet: ";
    system("clear");
  }
};
#endif