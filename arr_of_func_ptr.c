/* C program to demonstrate usage of array of function pointers */

#include<stdio.h>

void (*fp[2])(int, int);
void func1(int a, int b);
void func2(int a, int b);

int main(int argc, char *argv[])
{
  fp[0] = func1;
  fp[1] = func2;

  // Calling in 2 different ways
  
  fp[0](15, 20);
  (*fp[1])(25,30);

  return 0;
}

void func1(int a, int b)
{
  printf("Function 1 called with values %d and %d\n", a,b);
}

void func2(int a, int b)
{
  printf("Function 2 called with values %d and %d\n", a,b);
}