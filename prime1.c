#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int counter;
  int i;
  int is_prime;
  
  for (counter=2; counter <=100; counter++)
  {
    is_prime=1;
    for (i=2; i<=counter-1; i++)
    {
      if (counter%i == 0)
      is_prime=0;
    }
    if (is_prime)
    printf("%i,", counter);
  }
  printf("\n");
  
  return 0;
}
