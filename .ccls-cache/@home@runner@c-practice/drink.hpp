#ifndef DRINK_HPP
#define DRINK_HPP
#include <iostream>

class Drink
{
  public:
  void SetPrice(double a)
  {
    price = a;
  }

  protected:
  double price;
};

class Tea : public Drink
{
  public:
  void Make(){std::cout << "Tea made.\nPrice: $" << price << std::endl << std::endl;}
};

class Coffee : public Drink
{
  public:
  void Make(){std::cout << "Coffee made.\nPrice: $" << price << << std::endl <<std::endl;}
};

#endif