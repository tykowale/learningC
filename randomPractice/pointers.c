#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;

  printf("Address of `i`: %p\n", &i);

  int actual_number = 29;
  int *pointer_number = &actual_number;

  // Show address of actual_number
  printf("Address of actual_number: %p\n", &actual_number);

  // show what pointer_number is
  printf("Address stored in pointer_number: %p\n", pointer_number);

  // access the value in pointer_number
  printf("Value of *pointer_number: %d\n", *pointer_number);

  return 0;
}