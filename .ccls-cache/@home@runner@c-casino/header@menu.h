#ifndef MENU_H
#define MENU_H

#include <iostream>

struct Menu
{
  static void PrintMenu();

  static void PrintGuesspPomptDie();

  static void PrintGuesspPomptDouble();

  static void PrintBetPrompt();
};
#endif