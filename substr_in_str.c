/**
 * Write a program to check if a SUBSTRING exists within a STRING.
 * Example: STRING: Hello World; SUBSTRING: Wor; OUTPUT: FOUND
 * Example: STRING: Hello World; SUBSTRING: For; OUTPUT: NOT_FOUND
 *
 * NOTE: Without using string library. No #include<string.h>
 */

#include<stdio.h>
#define MAX_STRING_SIZE 20

char str[MAX_STRING_SIZE];
char substr[MAX_STRING_SIZE];

int found = 0;
int string_size, substring_size;

int str_size(char *string, int max_size);

int main(int argc, char *argv[])
{
  printf("Enter the string: ");
  fgets(str, MAX_STRING_SIZE, stdin);

  printf("Enter the substring to search: ");
  fgets(substr, MAX_STRING_SIZE, stdin);

  string_size = str_size(str, MAX_STRING_SIZE);
  substring_size = str_size(substr, MAX_STRING_SIZE);

  // Clean newline from string and substring
  str[string_size-2] = str[string_size-1];
  substr[substring_size-2] = substr[substring_size-1];

  // Reduce indexes
  string_size--;
  substring_size--;

  printf("Size of the string is: %d, substring is: %d\n\n", string_size, substring_size);
  printf("String: %s, Substring: %s \n", str, substr);

  int j = 0;
  for(int i=0; i<string_size; i++)
  {
    if(str[i] == substr[j])
    {
      found = 1;
      j++;
    }
    else
    {
      found = 0;
      j=0;
    }

    if(j==(substring_size-1))
    {
      break;
    }
  }

  if(found == 0)
  {
    printf("String NOT_FOUND\n");
  }
  else
  {
    printf("String Found\n");
  }

  return 0;
}

int str_size(char *string, int max_size)
{
  int size=0;

  for(int i=0; i<max_size; i++)
  {
    size++;
    if(string[i] == '\0')
    {
      break;
    }
  }
  return size;
}
