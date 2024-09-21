/* C program to calculate fibonacci series iteratively upto n terms */

#include<stdio.h>

int num;

void printFibonacci(int n);

int main(int argc, char *argv[])
{
    printf("Please enter the number of terms \n");
    scanf("%d", &num);

    printf("Fibonacci Series is: ");
    printf("%d %d ", 0, 1);

    printFibonacci(num-2);
    printf("\n");

    return 0;
}

void printFibonacci(int n)
{
    static int n1=0, n2=1, n3;
   
    if(n >= 0)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf("%d ", n3);

        printFibonacci(n-1);
    }
}
