#include<stdio.h>

#define BIT_MASK 0x01

int int_size = sizeof(int) * 8; // Convert bytes to bits

int main() {

  int test_number = 0x77;

  int ones_count = 0;

  for(int i = 0; i< int_size; i++)
  {
    if((test_number & BIT_MASK) == BIT_MASK)
    {
      ones_count++;
    }
    test_number  = test_number >> 1;
  }

  printf("Number of ones in given integer are: %d\n", ones_count);

  return 0;
}
