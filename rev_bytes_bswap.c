/* C program to reverse the bytes */

#include<stdio.h>
#include<byteswap.h>
#include<inttypes.h>

uint32_t a = 0xAABBCCDD;

int main(int argc, char *argv[])
{
    a = bswap_32(a);
    printf("Reversed order is 0x%X\n", a);

    return 0;
}
