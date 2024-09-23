/* C program to check if a number is a power of 2 or not */

#include<stdio.h>
#include<math.h>

int num;

int main(int argc, char *argv[])
{
    printf("Enter a number: ");
    scanf("%d", &num);

    if(ceil(log2(num)) == floor(log2(num)))
    {
      printf("\nThe number is perfect power of 2 \n");
    }
    else
    {
      printf("\nThe number is not power of 2! \n");
    }

    return 0;
}
