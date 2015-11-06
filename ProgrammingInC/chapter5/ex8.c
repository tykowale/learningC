/*Program to reverse the digits of a number*/

#include <stdio.h>

int rev (int number)
{
    int base = 1;

    while (number / (base * 10)) {
        base *= 10;
    }

    if (number <= 9) {
        return number;
    } else {
        int revNum = (number % 10) * base;
        return rev(number / 10) + revNum;
    }
}

int main (void)
{
    int number, right_digit;

    printf ("Enter your number.\n");
    scanf ("%i", &number);

    printf("Recursion -- %i\n", rev(number));

    printf("While Loop -- ");

    while (number != 0) {
        right_digit = number % 10;
        printf ("%i", right_digit);
        number /= 10;
    }

    printf("\n");

    return 0;
}

