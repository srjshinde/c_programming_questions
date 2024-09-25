/* C program to demonstrate the usage of stringize opeator # */

#include <stdio.h>

#define DBG_PRINT_INT(VARNAME) printf(#VARNAME" is = %d\n", VARNAME)

int area = 10;
int perimeter = 20;
int circumference = 30;

int main(int argc, char *argv[])
{
  DBG_PRINT_INT(area);
  DBG_PRINT_INT(perimeter);
  DBG_PRINT_INT(circumference);

  return 0;
}
