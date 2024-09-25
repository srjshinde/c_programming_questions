/* Program to delete duplicate elements from a string using an in-place algorithm */

#include <stdio.h>
#include<string.h>
#define MAX_STRING_SIZE 20

char str[MAX_STRING_SIZE];

int size;

int main(int argc, char *argv[])
{
  printf("Enter the string: ");
  fgets(str, MAX_STRING_SIZE, stdin);

  // Remove newline and shift the '\0'
  size = (int)strlen(str);
  str[size-2] = str[size-1];
  size--;

  int index = 0;
  int i, j;

  // Traverse through all characters
  for (i = 0; i < size; i++)
  {
      
    // Check if s[i] is present before it  
    for (j = 0; j < i; j++) 
      if (str[i] == str[j])
        break;
    
    // If not present, then add it to result
    if (j == i)
      str[index++] = str[i];
  }
  
  // Resize the string to remove extra characters
  str[index] = '\0';

  printf("Without duplicates: %s\n", str);

  return 0;
}
