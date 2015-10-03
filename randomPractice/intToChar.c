#include <stdio.h>

/* I was able to convert a `char` into an int
why not try an do the reverse?*/

int main(int argc, char *argv[])
{
  int word[4] = {65};
  char *to_letter = &word;

  printf("%c\n", *to_letter);

  return 0;
}