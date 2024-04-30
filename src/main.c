#include <stdio.h>
#include "licence.h"
int main(int argc, char const *argv[])
{
  srand((unsigned)time(0));
  int number, character, amount = 1;
  if (argc == 4)
  {
    number = atoi(argv[2]);
    character = atoi(argv[1]);
    amount = atoi(argv[3]);
  }
  else if (argc == 3)
  {
    number = atoi(argv[2]);
    character = atoi(argv[1]);
  }
  else if (argc == 1)
  {
    printf("\nhow many column per line？:");
    scanf("%d", &character);
    printf("\nhow many charater per column？:");
    scanf("%d", &number);
    printf("\nhow many line you want generat？:");
    scanf("%d", &amount);
    printf("generate result：\n");
  }
  else
  {
    printf("need 2 or 3 parameter! useage：\ncolumn character lines\n");
    return 0;
  }
  for (int i = 0; i < amount; i++)
  {
    char *licence = new_licence(number, character);
    printf(" %s\n", licence);
  }
  return 0;
}
