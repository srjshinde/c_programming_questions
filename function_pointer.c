/* C program to demonstrate usage of a fucntion pointer */

#include<stdio.h>

void (*fp)(int, int);
void func(int a, int b);

int main(int argc, char *argv[])
{
  fp = func;

  // Calling in 3 different ways
  func(5, 10);
  fp(15, 20);
  (*fp)(25,30);

  return 0;
}

void func(int a, int b)
{
  printf("Function called with values %d and %d\n", a,b);
}