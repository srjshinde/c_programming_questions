/* C program to find size of array without using sizeof */

#include<stdio.h>

int arr[5]={0};

int main(int argc, char *argv[])
{
    printf("sizeof array is: %ld \n", *(&arr+1) - arr); 

    return 0;
}
