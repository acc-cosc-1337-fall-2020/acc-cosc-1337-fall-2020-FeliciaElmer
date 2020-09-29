//cpp
#include "decision.h"

std::string get_letter_grade_using_if(int grade)
{
  std::string letter_grade;
  
  if(grade >= 0 && grade <= 59)
  {
    letter_grade = "F";
  }
  else if(grade >= 60 && grade <= 69)
  {
    letter_grade = "D";
  }
  else if(grade >= 70 && grade <= 79)
  {
    letter_grade = "C";
  }
  else if(grade >= 80 && grade <= 89)
  {
    letter_grade = "B";
  }
  else if(grade>= 90 && grade <=100)
  {
    letter_grade = "A";
  }
  else
  {
    letter_grade = "Unable to process letter grade.";
  }
  
  return letter_grade;
}

std:: string get_letter_grade_using_switch(int grade)
{
  std::string letter_grade_switch;

  switch(grade/10)
  {
  case 0:
    letter_grade_switch = "F";
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    letter_grade_switch = "F";
    break;
  case 6:
    letter_grade_switch = "D";
    break;
  case 7:
    letter_grade_switch = "C";
    break;

  case 8:
    letter_grade_switch = "B";
    break;

  case 9:

  case 100:
    letter_grade_switch = "A";
    break;

  default:
    letter_grade_switch = "Invalid grade.  Please use an interval of 10.";
    break;
  }

  return letter_grade_switch;
}