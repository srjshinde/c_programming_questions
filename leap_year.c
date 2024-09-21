/* C program to check whether a year is a leap year */

/* 1. A leap year should be completely divisible by 400
                        or
    2. Completely divisible by 4 but not 100 
*/

#include<stdio.h>

unsigned int year;

int main(int argc, char *argv[])
{
    printf("Enter an decimal number:  ");
    scanf("%d", &year);

    if(!(year%400))
    {
        printf("%d is a leap year!\n", year);
    }
    else if ( !(year%4) && !(year%100))
    {
        printf("%d is NOT a leap year!\n", year);
    }
    else
    {
        printf("%d is a leap year!\n", year);
    }

    return 0;
}
