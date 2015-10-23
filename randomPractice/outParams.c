#include <stdio.h>

void min_max(int *begin, int *end, int **smallest, int **largest)
{
  if(begin == end) {
    *smallest = 0;
    *largest = 0;
    return;
  }

  *smallest = *largest = begin;

  while (++begin != end) {
      if (*begin < **smallest) {
        *smallest = begin;
      }

      if (*begin > **largest) {
        *largest = begin;
      }
  }
}

int main(int argc, char *argv[])
{
  int values[] = { 4, 8, 15, 16, 23, 42 };
  int size = sizeof(values) / sizeof(int);

  int *smallest;
  int *largest;

  min_max(values, values + size, &smallest, &largest);

  printf("Smallest: %d \n", *smallest);
  printf("Largest: %d \n", *largest);

  return 0;
}