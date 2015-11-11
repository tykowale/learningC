/*Sieve of Erastosthenes */

#include <stdio.h>

int main (void)
{
    int n = 150, numbers[n], primes[n];
    int i, j;

    // variable sized arrays can't be instantiated with values...
    for ( i = 0; i <= n; ++i ) {
        numbers[i] = 0;
        primes[n] = 0;
    }

    for ( i = 2; i < n; ++i ) {
        if (numbers[i] == 0) {
            numbers[i - 2] = i;
        }

        for ( j = 2 * i; j < n; j += i ) {
            numbers[j] = -1;
        }
    }

    for ( i = 0, j = 0; i <= n; i++ ) {
        if ( numbers[i] > 0 ) {
            primes[j++] = numbers[i];
        }
    }

    for ( i = 0; i < n; ++i ) {
        if ( primes[i] == 0 ) {
            break;
        }

        printf ("%i ", primes[i]);
    }

    printf ("\n");

    return 0;
}

