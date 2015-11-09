/*Program to convert a positive integer to another base*/

#include <stdio.h>

int main (void)
{
    const char base_digits[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int converted_number[64];
    long int number_to_convert;
    int next_digit, base;
    int index = 0;

    // get the number and the base
    printf ("Number to be converted? ");
    scanf ("%ld", &number_to_convert);
    printf ("Base? ");
    scanf ("%i", &base);

    // convert to the indicated base

    do {
        converted_number[index] = number_to_convert % base;
        ++index;
        number_to_convert = number_to_convert / base;

    } while ( number_to_convert != 0 );

    // display the results in reverse order

    printf ("Converted number = ");
    for ( --index; index >= 0; --index ) {
        next_digit = converted_number[index];
        printf ("%c", base_digits[next_digit]);
    }

    printf ("\n");
    return 0;
}

