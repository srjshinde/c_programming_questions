/* C program to swap nibbles in a byte using parametrized macro*/

#include<stdio.h>

#define NIBBLE_SWAP(BYTE) (((BYTE&0x0F)<<4) | ((BYTE&0xF0)>>4))

unsigned int byte = 0xCD;

int main(int argc, char *argv[])
{
    byte = NIBBLE_SWAP(byte);

    printf("Reversed byte is: 0x%X \n", byte);
    
    return 0;
}