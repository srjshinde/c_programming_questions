/* C code to find number of number of 1s in an decimal number */

#include<stdio.h>

int num, count;

int main(int argc, char *argv[])
{
    printf("Please enter the number to count 1s \n");
    scanf("%d", &num);

    while(num)
    {
        if(num%10 == 1)
        {
            count++;
        }
        num = num/10;
    }

    printf("Count of 1 is: %d\n", count);

    return 0;
}