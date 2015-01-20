#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int counter;
  int prime;
  
  for (counter=2; counter <=100; counter++)
  {
    if (counter > 1)
    printf("%i,", counter);
  }
  printf("\n");
  
  return 0;
}
