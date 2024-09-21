/* C program to reverse an array*/

#include<stdio.h>

int arr[5] = {0,1,2,3,4};
int revarray[5] = {0};
int size;

int main(int argc, char *argv[])
{
    size = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<=size; i++)
    {
        revarray[i] = arr[size-i];
        printf("%d ", revarray[i]);
    }
     printf("\n");

    return 0;
}
