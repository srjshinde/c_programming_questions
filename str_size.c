/* C program to find the length of a string without using library function */

#include<stdio.h>
#define ARR_SIZE 20

char str[ARR_SIZE] = "Hello World!";
int str_size;

int main(int argc, char *argv[])
{

  for(int i=0; i<ARR_SIZE; i++)
  {
    str_size++;
    if(str[i] == '\0')
    {
      break;
    }
  }

  printf("Size of the string is: %d\n", str_size);

  return 0;
}
