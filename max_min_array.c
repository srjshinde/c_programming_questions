/* C program to find Maximum and Minimum in an array */

#include<stdio.h>
#define ARR_SIZE 10

int arr[ARR_SIZE] = {5,1,4,12,8,96,3,18,18,6};

int max,min;

int main(int argc, char *argv[])
{
  max=arr[0];
  min=arr[0];

  for(int i=0; i<ARR_SIZE; i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
    }

    if(arr[i]<min)
    {
      min=arr[i];
    }
  }

  printf("Max Value: %d, Min Value: %d\n", max, min);

  return 0;
}

