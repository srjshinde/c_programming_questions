/* C program to determine endianness of the platform*/

#include<stdio.h>

int a = 0x01234567;
char *cptr = (char *) &a; 

int main(int argc, char *argv[])
{
    if(*cptr == 0x67)
    {
        printf("The system is Little endian! \n");
    }
    else if(*cptr == 0x01)
    {
        printf("The system is Big endian! \n");
    }

    return 0;
}
