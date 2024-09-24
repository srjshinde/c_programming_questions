/* C program to remove duplicates from an array */

#include<stdio.h>
#define ARR_SIZE 10

// Function to print an array
void printarray(int array[], int arr_size);


int arr[ARR_SIZE] = {5,1,4,18,8,96,3,18,18,6};
int filtered_arr[ARR_SIZE];

int isDuplicate, max_size; 

int main(int argc, char *argv[])
{

  for(int i=0; i<ARR_SIZE; i++)
  {
    for(int j=0; j<max_size; j++)
    {
      if(filtered_arr[j]==arr[i])
      {
        isDuplicate = 1;
      }
    }
    if(isDuplicate==0)
    {
      filtered_arr[max_size] = arr[i];
      max_size++;
    }
    isDuplicate = 0;
  }

  printf("Original array is: ");
  printarray(arr, ARR_SIZE);

  printf("Duplicates filtered array is: ");
  printarray(filtered_arr, max_size);

  return 0;
}

void printarray(int array[], int arr_size)
{
  for(int i=0; i<arr_size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}
