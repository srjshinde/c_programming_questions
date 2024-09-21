/* C program find factorial of a number by iterative method */

#include<stdio.h>

unsigned int num, result=1;

int main(int argc, char *argv[])
{

  printf("Enter a number: ");
  scanf("%d", &num);

  for(unsigned int i=2; i<=num; i++)
  {
    result *= i;
  }

  printf("factorial is %d \n", result);

  return 0;
}