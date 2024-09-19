/* C program to determine endianness of the platform using union*/

#include<stdio.h>

union test
{
    int number;
    char lsb;
}utest;

int main(int argc, char *argv[])
{
    utest.number = 0x01234567;

    if(utest.lsb == 0x67)
    {
        printf("The system is Little endian! \n");
    }
    else if(utest.lsb == 0x01)
    {
        printf("The system is Big endian! \n");
    }

    return 0;
}
