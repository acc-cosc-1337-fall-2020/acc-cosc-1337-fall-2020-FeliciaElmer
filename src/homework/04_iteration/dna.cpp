#include "dna.h"
using namespace std;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(std::string dna)
{
  int gccounter = 0;
  for(std::size_t i = 0; i < dna.size(); ++i)
  {
    if (dna[i] == 'C' || dna[i] == 'G')
    {
      gccounter ++;
    }
  }
  return gccounter / (double)dna.size();
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string dna)
{
  int length = dna.size();
  int n = length-1;
  int i = 0;
  while(i<=n)
  {
    swap(dna[i], dna[n]);
    n = n-1;
    i = i+1;
  }
  return dna;
}

/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
  int length = dna.size();
  int n = length-1;
  int i = 0;
  while(i<=n)
  {
    swap(dna[i], dna[n]);
    n = n-1;
    i = i+1;
  }

  for(std::size_t i=0; i< dna.size(); ++i)
  {
    if ('A' == dna[i])
    {
      dna[i] = 'T';
    }
    else if ('T'== dna[i])
    {
      dna[i] = 'A';
    }
    else if ('C' == dna[i])
    {
      dna[i] = 'G';
    }
    else if('G' == dna[i])
    {
      dna[i] = 'C';
    }
    else
    {
      dna[i] = '-';
    }
  }
  return dna;
}
