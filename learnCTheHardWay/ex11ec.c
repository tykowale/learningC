#include <stdio.h>

/* Use a while loop to copy the values from argv into a dif array.*/
int main(int argc, char *argv[])
{
  char *new_argv[argc];
  int i = 0;
  while(i < argc) {
    new_argv[i] = argv[i];
    printf("copied argv: %s\n", new_argv[i]);
    i++;
  }

  return 0;
}