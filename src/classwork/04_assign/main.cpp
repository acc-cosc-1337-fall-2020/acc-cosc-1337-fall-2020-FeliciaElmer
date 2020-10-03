//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using std::cout; using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
  int num;
  int result;
  num = 0;
  cout<<"Insert a number between 0 and 10 to factorial: ";
  cin>>num;

  do
  {
    cout<<"Insert a number between 0 and 10: "<<"\n";
    cin>> num;
    result = factorial(num);
    cout<<"The factorial is: "<<result<<"\n";
    cout<<"If you wish to end the program do not enter a number between 0 and 10. "<<"\n";
    cin>>num;

  }
  while (num>= 0 && num <= 10);

	return 0;
}