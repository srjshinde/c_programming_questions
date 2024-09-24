/* C Program to find the largest number out of three digits using ternary operator */

#include<stdio.h>
int a, b, c;

int main(int argc, char *argv[])
{
  printf("Enter the a, b and c separated by comma: ");
  scanf("%d,%d,%d", &a,&b,&c);

  printf("Largest number is: %d\n", a>b ? (a>c? a:c) : (b>c? b:c));

  return 0;
}
