#ifndef GRADES_HPP
#define GRADES_HPP
#include <iostream>
#include <vector>
class Grades
{

public:
  static int Grade(unsigned Grade)
    {
      if(Grade <= 100 && Grade >= 90) return 1;
        
      else if(Grade <= 89 && Grade >= 80) return 2;
      
      else if(Grade <= 79 && Grade >= 70) return 3;
      
      else if(Grade <= 69 && Grade >= 60) return 4;
      
      else return 5;
      
    }

  static void CheckGrade(std::vector<unsigned> Grades)
  {
    for(int Counter = 0; Counter <= Grades.size(); Counter++)
      {
        switch(Grades[Counter])
          {
            case 1:
            std::cout << Counter << ": A\n";
            break;
            
            case 2:
            std::cout << Counter << ": B\n";
            break;
            
            case 3:
            std::cout << Counter << ": C\n";
            break;
            
            case 4:
            std::cout << Counter << ": D\n";
            break;
            
            case 5:
            std::cout << Counter << ": F\n";
            break;
          }
      }
  }
};
#endif