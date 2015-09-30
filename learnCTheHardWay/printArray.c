#include <stdio.h>

int main(int argc, char *argv[])
{
  int foo[] = {1,2,3,4};
  int i;
  for(i=0; i < (sizeof(foo) / sizeof(foo[0])); i++) {
    printf("%d \n", foo[i]);
  }

  return 0;
}