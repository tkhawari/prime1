#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int counter;
  int i;
  int is_prime=0;
  
  for (counter=2; counter <=100; counter++)
  {
    for (i=2; i<=counter-1; i++)
    {
      if (i %counter != 0)
      return is_prime;
    }
    
    printf("%i,", counter);
  }
  printf("\n");
  
  return 0;
}
