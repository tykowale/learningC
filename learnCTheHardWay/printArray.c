#include <stdio.h>

int main(int argc, char *argv[])
{
  int foo[] = {1,2,3,4};
  int sizeOfFoo = sizeof(foo);
  int lengthOfFoo = sizeof(foo) / sizeof(foo[0]);
  int i;
  for(i=0; i < lengthOfFoo; i++) {
    printf("%d \n", foo[i]);
  }

  printf("size of foo: %d\n", sizeOfFoo);
  printf("length of foo: %d\n", lengthOfFoo);
  return 0;
}