/* C program to reverse a decimal number */

#include<stdio.h>

int num, revnum;

int main(int argc, char *argv[])
{
    printf("Please enter the number of terms \n");
    scanf("%d", &num);

    printf("Number is: %d\n", num);

    while(num)
    {
        revnum = revnum*10 + num%10;
        num = num/10;
    }

    printf("reverse is: %d\n", revnum);

    return 0;
}
