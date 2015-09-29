#include <stdlib.h>

/* warning: this program has a memory error and leak */

void f(void)
{
  int* x = malloc(10 * sizeof(int));
  x[10] = 0;  // problem 1: heap block overrun
              // problem 2: memory leak -- x not freed
}

int main(void)
{
  f();
  return 0;
}