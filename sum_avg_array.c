/* C program to find sum and average of an array */

#include<stdio.h>
#define ARR_SIZE 10

int arr[ARR_SIZE] = {5,1,4,12,8,96,3,18,18,6};

int sum;
float avg;

int main(int argc, char *argv[])
{

  for(int i=0; i<ARR_SIZE; i++)
  {
    sum = sum+arr[i];
  }

  avg = (float)sum/ARR_SIZE;

  printf("Sum is: %d, Avg is: %.2f\n", sum, avg);

  return 0;
}
