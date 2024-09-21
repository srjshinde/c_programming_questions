/* C program to check whether a number is prime */

#include<stdio.h>

int num, isPrime=1;

int main(int argc, char *argv[])
{
    printf("Please enter the number to check\n");
    scanf("%d", &num);

    if(num==0 || num==1)
    {
        printf("%d is neither prime, nor composite!", num);
    }

    for(int i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    if(isPrime)
    {
        printf("%d is prime!\n", num);
    }
    else
    {
        printf("%d is composite!\n", num);
    }

  return 0;
}
