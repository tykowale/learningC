#include <stdio.h>

int main(int argc, char *argv[])
{
  if (argc!=2) {
    printf("ERROR: You need one argument.\n");
    // this aborts the program
    return 1;
  }

  int i;
  char letter;

  for(i = 0; letter = argv[1][i], letter != '\0'; i++) {

    switch(letter) {
      case 'a':
      case 'A':
        printf("%d: 'A'\n", i);
        break;
      case 'e':
      case 'E':
        printf("%d: 'E'\n", i);
        break;
      case 'i':
      case 'I':
        printf("%d: 'I'\n", i);
        break;
      case 'o':
      case 'O':
        printf("%d: 'O'\n", i);
        break;
      case 'u':
      case 'U':
        printf("%d: 'U'\n", i);
        break;
      case 'y':
      case 'Y':
        // it's only sometimes Y
        if (i % 2 == 0) {
          printf("%d: 'Y'\n", i);
        } else {
          printf("%d: %c is not a vowel\n", i, letter);
        }
        break;

      default:
        printf("%d: %c is not a vowel\n", i, letter);
    }
  }

  return 0;
}