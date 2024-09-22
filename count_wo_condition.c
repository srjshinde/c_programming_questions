/* C program to print 1-100 number without the use of conditional operator */

#include<stdio.h>

int num=100;

int main(int argc, char *argv[])
{

  while(num)
  {
    num--;
    printf("%d ", 100-num);
  }

  printf("\n");

  return 0;
}