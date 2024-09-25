/* Program to swap odd and even bits */

#include<stdio.h>
#include<inttypes.h>

uint32_t dbyte = 0x55555555;
uint32_t e_byte;
uint32_t o_byte;

int main(int argc, char *argv[])
{
  printf("Original data is: 0x%X\n", dbyte);

  o_byte = (dbyte & 0x55555555)<<1;
  e_byte = (dbyte & 0xAAAAAAAA)>>1;

  dbyte = e_byte | o_byte;
  
  printf("Swapped data is: 0x%X\n", dbyte);

  return 0;
}

