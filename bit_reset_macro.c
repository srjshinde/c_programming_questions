/* C program to reset particular bit(s) to 0*/

#include<stdio.h>

#define clearbit(register, mask, bit_position) (register & (~(mask << bit_position)))

unsigned a = 0xFFFFFFFF;

int main(int argc, char *argv[])
{
    // Set 0th bit to 0
    a = clearbit(a, 0x01U, 0U);
    printf("Value of a is %x\n", a);

    // Set third bit to 0
    a = clearbit(a, 0x01U, 3U);
    printf("Value of a is %x\n", a);

    // Set 5th and 6th bit to 00
    a = clearbit(a, 0x03U, 5U);
    printf("Value of a is %x\n", a);

    // Set 8th, 9th and 10th bit to 000
    a = clearbit(a, 0x07U, 8U);
    printf("Value of a is %x\n", a);

    return 0;
}
