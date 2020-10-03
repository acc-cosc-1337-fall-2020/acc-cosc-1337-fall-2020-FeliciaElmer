//cpp
#include "loops.h"
#include <iostream>

int factorial(int num)
{
  int i = 1;
  int total = 1;

  while(i <= num)
  {
    total = total * i;
    i++;
  }
  
  return total;
}