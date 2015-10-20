#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[3] = { 101, 202, 303 };
  int size = sizeof(numbers) / sizeof(int);

  int *p = numbers;
  int *end = p + size;

  for (; p != end; p++) {
    printf("%d\n", *p);
  }

  // This points one byte of memory beyond the array
  char *onePastArray = (char *)p + size;

  printf("%c\n", *onePastArray);

  printf("sizeof(pointer): %d\n", (int) sizeof(p));

  return 0;
}