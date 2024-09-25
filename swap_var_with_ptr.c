/* C Program to Swap two Numbers using Call by reference */

#include<stdio.h>

int a=10;
int b=20;

void swap(int *a, int *b);

int main(int argc, char *argv[])
{
  printf("Original data: a=%d, b=%d\n", a,b);
  swap(&a, &b);
  printf("Swapped data: a=%d, b=%d\n", a,b);

  return 0;
}

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
