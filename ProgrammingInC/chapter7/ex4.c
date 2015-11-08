/*Program to generate prime numbers, v2*/
#include <stdio.h>

int main (void)
{
    int i, p;
    int primes[50];
    int primeIndex = 2;
    _Bool isPrime;

    primes[0] = 2;
    primes[1] = 3;

    for ( p = 5; primeIndex < 50; p += 2 ) {
        isPrime = 1;

        for ( i = 1; isPrime && p / primes[i] >= primes[i]; ++i ) {
            if ( p % primes[i] == 0 ) {
                isPrime = 0;
            }
        }

        if ( isPrime ) {
            primes[primeIndex] = p;
            ++primeIndex;
        }
    }

    for ( i = 0; i < primeIndex; ++i ) {
        printf ("%i ", primes[i]);
    }

    printf ("\n");

    return 0;
}

