/* size of the following struct on a 64 and 32 bit machine */
#include<stdio.h>

struct test
{
  
  struct test1
  {
    char e;
    double f;
    char g;
  }pd;
  char a;
  int b;
}padtest;

int main() {

  printf("size of double: %zu,  struct: %zu\n", sizeof(double), sizeof(padtest));

  return 0;
}
