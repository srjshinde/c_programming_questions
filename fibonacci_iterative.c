/* C program to calculate fibonacci series iteratively upto n terms */

#include<stdio.h>

int num, t1=0, t2=1, next;

int main(int argc, char *argv[])
{
    printf("Please enter the number of terms \n");
    scanf("%d", &num);

    printf("Fibonacci series upto %d is: %d %d", num,t1,t2);

    for(int i=2; i<=num; i++)
    {
        next= t1+t2;
        t1=t2;
        t2=next;

        printf(" %d", next);
    }
    printf("\n");

    return 0;
}
