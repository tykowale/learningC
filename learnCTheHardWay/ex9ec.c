#include <stdio.h>

/* Prompt: If an array of characters is 4 bytes long, and an integer is 4 bytes long, then can you treat the whole name array like it's just an integer? How might you accomplish this crazy hack?

Idea: Create a char[], reference that address to a pointer then print out the result. 'A' in binary is 65 so if all goes well
the result of this should be 65 printing out
*/

int main(int argc, char *argv[])
{
  char name[4] = {'A'};

  int *name_int = &name;
  printf("%d\n", *name_int);

  return 0;
}