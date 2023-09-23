/*
 * Demo program in C
 */

#include <stdio.h>

// Include library that has sleep()
#include <unistd.h>

int main()
{
  printf("Hello world fixed");
  fflush(stdout);

  for (int i = 1; i <= 5; ++i)
  {
    printf("!");
    fflush(stdout);
    sleep(.1);
  }

  printf("\n");
  return 0;
}
