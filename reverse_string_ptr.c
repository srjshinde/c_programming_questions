/* C program to reverse a string using pointer */

#include<stdio.h>
#include<string.h>

#define MAX_LIMIT 20

char str[MAX_LIMIT];
char rev_str[MAX_LIMIT];

unsigned int size;

int main(int argc, char *argv[])
{
  printf("Enter a sring to reverse it: ");
  fgets(str, MAX_LIMIT, stdin);
  printf("%s\n", str);

  size = strlen(str);
  size--; // Remove the trailing '\0'

  printf("Size of the string: %u\n", size);

  for(unsigned int i=0; i<=size; i++)
  {
    *(rev_str+i) = *(str+(size-i));
  }
  *(rev_str+size+1) = '\0';

  printf("Reversed string is: %s\n", rev_str);

  return 0;
}
