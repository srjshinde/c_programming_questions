/* C program to swap two bytes of a number*/

#include<stdio.h>

unsigned int byte = 0xABCD;

int main(int argc, char *argv[])
{
    byte = ((byte&0x00FF)<<8) | ((byte&0xFF00)>>8);

    printf("Reversed byte is: 0x%X \n", byte);
    
    return 0;
}