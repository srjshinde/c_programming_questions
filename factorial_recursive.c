/* C program find factorial of a number by recursive method */

#include<stdio.h>

int num;
int factorial(int n);

int main(int argc, char *argv[])
{
    printf("Enter the number to calculate factorial\n");
    scanf("%d", &num);

    printf("Factorial of %d is: ", num);

    printf("%d\n", factorial(num));

    return 0;
}

int factorial(int n)
{
    if(n==0)
    return 1;

    return n*factorial(n-1);
}