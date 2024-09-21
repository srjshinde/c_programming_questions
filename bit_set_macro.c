/* C program to set particular bit(s) to 1 using parametrized macro*/

#include<stdio.h>

#define setbit(register, mask, bit_position) (register | (mask << bit_position))

unsigned a = 0xFFFFF000;

int main(int argc, char *argv[])
{
    // Set 0th bit to 1
    a = setbit(a, 0x01U, 0);
    printf("Value of a is %x\n", a);

    // Set third bit to 1
    a = setbit(a, 0x01U, 3);
    printf("Value of a is %x\n", a);

    // Set 5th and 6th bit to 11
    a = setbit(a, 0x03U, 5);
    printf("Value of a is %x\n", a);

    // Set 8th, 9th and 10th bit to 111
    a = setbit(a, 0x07U, 8);
    printf("Value of a is %x\n", a);

    return 0;
}