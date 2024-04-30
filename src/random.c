#include <stdlib.h>
#include <time.h>
int random_n(void)
{
  int a = (rand() % 10);
  a += 48;
  if (a == 49) // regenerat if a=1
  {
    a = random_n();
  }
  return a;
}

char *random_c(void)
{
  int a = (rand() % 26);
  char b = a + 'A';
  if (b == 'O' || b == 'U' || b == 'S') // make sure won't generate characer O,U,S
  {
    b = random_c();
  }
  return b;
}