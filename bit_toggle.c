/* C program to toggle particular bit in a hex number*/

#include<stdio.h>

unsigned a = 0xFFFFF000;

int main(int argc, char *argv[])
{
    // Set 1st bit to 1
    a = a ^ 0x01U << 1;
    printf("Value of a is 0x%X\n", a);

    return 0;
}
