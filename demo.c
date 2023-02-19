/*
 * Demo program in C
 */

#include <stdio.h>

int main()
{
  printf("Hello world");
  fflush(stdout);
  for(int i = 1; i <= 15; ++i)
  {
    printf("!");
    fflush(stdout);
    sleep(.1);
  }

  printf("\n");
  return 0;
}
