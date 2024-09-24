/* C program to demonstrate usage of a funtion pointer pointing to a function returning a integer pointer */

#include<stdio.h>

int num = 100;
int *numptr = NULL;

int *(*fp)(int, int);
int *func(int a, int b);

int main(int argc, char *argv[])
{
  fp = func;

  numptr = fp(15, 20);

  printf("Returned value is: %d\n", *numptr);

  return 0;
}

int *func(int a, int b)
{
  printf("Function called with values %d and %d\n", a,b);

  num = a+b;

  return &num;
}
