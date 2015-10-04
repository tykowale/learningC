#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv

  int i = 0;
  while(i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // my own array of strings
  char *states[] = {
    "California", "Orgeon", "Washington", "Texas"
  };
  int num_state = 4;
  i = 0; // reset i after last loop
  while(i < num_state) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  return 0;
}