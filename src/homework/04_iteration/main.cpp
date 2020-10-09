//write include statements
#include "dna.h"
#include <iostream>
#include <string>


//write using statements
using namespace std; using std::cout; using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
  char cont;
  int prompt;
  std::string dna;
  double result_gc;
  std::string result_complement;

  cout<<"If you would like to find either the gc content or the DNA complement type y or Y: ";
  cin>>cont;

  while(cont == 'y' || cont == 'Y')
  {
    cout<<"Please enter 1 for the gc content or 2 for the DNA complement: ";
	  cin>>prompt;
    if (prompt == 1)
    {
      cout<<"Please enter the DNA string: ";
      cin>>dna;
      result_gc = get_gc_content(dna);
      cout<<"The GC content is: "<<result_gc<<'\n';
      cout<<"Would you like to find another gc content or a DNA complement? ";
      cin>>cont;
    }

    else if (prompt == 2)
    {
      cout<<"Please enter the DNA string: ";
      cin>>dna;
      result_complement = get_dna_complement(dna);
      cout<<"The complement is: "<<result_complement<<'\n';
      cout<<"Would you like to find another gc content or a DNA complement? ";
      cin>>cont;
    }

    else
    {
      cout<<"Would you like to find the gc content or a DNA complement? ";
      cin>>cont;
    }
  }


  return 0;
}