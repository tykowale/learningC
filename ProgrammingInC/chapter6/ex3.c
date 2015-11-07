/*Program to determine if a number is even or odd*/

#include <stdio.h>

int main (void)
{
    int number_to_test;

    printf ("Enter your number to be tested: ");
    scanf ("%i", &number_to_test);

    if ( number_to_test % 2 ) {
        printf ("The number is odd.\n");
    } else {
        printf ("The number is even.\n");
    }

    return 0;
}

