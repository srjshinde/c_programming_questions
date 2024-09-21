/* C program to check whether a number is a palindrome */

#include<stdio.h>

unsigned int num, original_num, reversed_num;

int main(int argc, char *argv[])
{
    printf("Enter an decimal number:  ");
    scanf("%d", &num);

    printf("Entered number is: %d\n", num);
    original_num = num;

    while(num)
    {
        reversed_num = reversed_num*10 + num%10;
        num = num/10;
    }

    printf("Reversed value of a is: %d\n", reversed_num);
    
    if(original_num == reversed_num)
    {
        printf("\n%d is a palindrome! \n", original_num);
    }
    else
    {
        printf("\n%d is NOT a palindrome! \n", original_num);
    }

    return 0;
}