//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"
#include <string>

//Write namespace using statements for cout and cin
using std::cout; using std::cin;

int main() 
{
  int grade;

  cout<<"Enter a grade: ";
  cin>>grade;

  if (grade >= 0 && grade <= 100)
  {
    std:: string result_if = get_letter_grade_using_if(grade);
    cout<<"Letter grade using if function: "<<result_if<<"\n";
    std:: string result_switch = get_letter_grade_using_switch(grade);
    cout<<"Letter grade using switch function: "<<result_switch;
  }
  else
  {
    cout<<"Number out of range.";
  }
}

