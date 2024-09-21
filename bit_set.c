/* C program to set particular bit(s) to 1*/

#include<stdio.h>

unsigned a = 0xFFFFF000;

int main(int argc, char *argv[])
{
    // Set 0th bit to 1
    a = a | 0x01U;
    printf("Value of a is %x\n", a);

    // Set 3rd bit to 1
    a = a | 0x01U<<3U;
    printf("Value of a is %x\n", a);

    // Set 5th and 6th bit to 11
    a = a | 0x03U<<5U;
    printf("Value of a is %x\n", a);

    // Set 8th, 9th and 10th bit to 111
    a = a | 0x07U<<8U;
    printf("Value of a is %x\n", a);

    return 0;
}
