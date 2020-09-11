//Write the include statement for types.h here
#include <iostream>
#include "types.h"

//Write include for capturing input from keyboard and displaying output to screen
using std::cout; using std::cin;

int main() 
{
  int num;
  int result;
  cout<<"Enter a number: ";
  cin>>num;

  result = multiply_numbers(num);
  cout<<"The result of the number entered multiplied by 5 is: "<<result<<"\n";
  int num1 = 4;

  result = multiply_numbers(num1);
  cout<<"The result of 4 *5 is: "<<result;

	return 0;
}

