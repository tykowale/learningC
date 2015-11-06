/*Factorial Calculator*/

#include <stdio.h>

int fact (int number)
{
    if ( number < 2 ) {
        return 1;
    } else {
        return fact(number - 1) * number;
    }
}

int main (void)
{
    int number;

    printf ("Enter a number - ");
    scanf ("%i", &number);

    printf("The factorial of %i is %i\n", number, fact(number));

    return 0;
}

