/* C program to reverse the bytes */

#include<stdio.h>

unsigned a = 0xAABBCCDD;

int main(int argc, char *argv[])
{

    a = ((a & 0x000000FF)<<24) | ((a & 0x0000FF00)<<8) | ((a & 0x00FF0000)>>8) | ((a & 0xFF000000)>>24);

    printf("Reversed order is 0x%X\n", a);

    return 0;
}
