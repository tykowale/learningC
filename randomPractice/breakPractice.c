#include <stdio.h>

/* Just some practice to see how breaks work. It 
exits whatever loop it is in, but it does not exit the
main function. Continues on normally after break.
*/
int main() 
{
  int i = 0;

  while(i < 10) {
    printf("value of i: %d ", i);
    i++;
    if (i > 6) {
      break;
    } else {
      printf("-- still going strong!\n");
    }
  }

  printf("The loop is over.\n");
}