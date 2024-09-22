/* Create struct for 32_bit 16_bit and 3 byte. What will be the size of above struct */

#include<stdio.h>
#include<inttypes.h>

struct test
{
  uint32_t a;
  uint16_t b;
  uint8_t arr[3];
}padtest;

int main(int argc, char *argv[])
{
  printf("sizeof padtest is: %ld \n", sizeof(padtest));

  return 0;
}