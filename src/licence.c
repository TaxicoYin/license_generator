#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char *new_licence(int size, int col)
{
  char licence[size * col + col]; // add extra col make sure have place put "-"
  for (int i = 0; i < size * col + col; i++)
  {
    if (i == size * col + (col - 1)) // add '\0' to the end to arry make sure not print weird character like "%"
    {
      licence[i] = '\0';
    }
    else if (((i + 1) % (size + 1) == 0) && (i != 0)) // put "-" at end of every bundle
    {
      licence[i] = '-';
    }
    else
    {
      int a = rand() % 2; // random 1,0 to decide use character or number;
      if (a == 1)
      {
        licence[i] = random_n();
      }
      else
      {
        licence[i] = random_c();
      }
    }
  }
  char *lic = licence;
  return lic;
}