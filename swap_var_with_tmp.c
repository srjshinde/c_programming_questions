/* C Program to Swap two Numbers by using third variable */

#include<stdio.h>

int a=10;
int b=20;

int tmp;

int main(int argc, char *argv[])
{
  printf("Original data: a=%d, b=%d\n", a,b);

  tmp = a;
  a=b;
  b=tmp;
  
  printf("Swapped data: a=%d, b=%d\n", a,b);

  return 0;
}

