/* C program to swap nibbles in a byte */

#include<stdio.h>

unsigned int byte = 0xAB;

int main(int argc, char *argv[])
{
    byte = ((byte&0x0F)<<4) | ((byte&0xF0)>>4);

    printf("Reversed byte is: 0x%X \n", byte);
    
    return 0;
}