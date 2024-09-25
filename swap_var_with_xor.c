/* C program to swap two numbers by using exor */

#include<stdio.h>

int a=10;
int b=20;

int main(int argc, char *argv[])
{
  printf("Original data: a=%d, b=%d\n", a,b);

  a=a^b;
  b=a^b;
  a=a^b;
  
  printf("Swapped data: a=%d, b=%d\n", a,b);

  return 0;
}
