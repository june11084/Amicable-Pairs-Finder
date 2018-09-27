/******************************************************************************

CS 153 PROGRAM ASSIGNMENT #3

Amicable Pairs

Jun Li

9/27/2018


*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
  int limit = 0;

  printf("\nEnter limit: ");
  scanf("%d", &limit);

  for(int i=2; i<=limit; i++)
  {
    int firstIntDivisorSum = sumDivisors(i);
    int secondIntDivisorSum = sumDivisors(firstIntDivisorSum);

    if(secondIntDivisorSum==i)
    {
      if(i==firstIntDivisorSum)
      {
        printf("\nA Perfect Number is: %d",i);
      }
      else if(firstIntDivisorSum>i)
      {
        printf("\nA Amicable Pair is: %d %d ",i,firstIntDivisorSum);
      }
    }

  }
  return 0;
}



int sumDivisors(int n)
{
  int sum = 1;
  for (int i=2; i<=sqrt(n); i++)
  {
    if (n%i == 0)
    {
      if (n/i == i)
      {
        sum = sum + i;
      }
      else
      {
        sum = sum + i;
        sum = sum + n/i;
      }
    }
  }
  return sum;
}
