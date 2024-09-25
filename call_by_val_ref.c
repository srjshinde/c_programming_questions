/* C program to demonstrate use of Call by Value and Call by Reference */

#include<stdio.h>

int a=10;
int b=20;

void call_by_val(int i, int j);
void call_by_ref(int *a, int *b);

int main(int argc, char *argv[])
{
  printf("Original data: a=%d, b=%d\n", a,b);

  call_by_val(a, b);
  printf("After call by val: a=%d, b=%d\n", a,b);

  call_by_ref(&a, &b);
  printf("After call by ref: a=%d, b=%d\n", a,b);

  return 0;
}

// Function to swap two integers using pointers
void call_by_ref(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void call_by_val(int i, int j)
{
  int temp;
  temp = i;
  i=j;
  j=temp;
}
