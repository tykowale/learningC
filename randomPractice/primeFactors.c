/*Find all prime factors of a numbers*/

#include <stdio.h>

void findFactor (long long int num)
{
    long long int counter = 2;

    for (; counter <= num; ++counter) {
        if ( num % counter == 0 ) {
            printf("%lli ", counter);
            findFactor ( num / counter );
            break;
        }
    }
}

int main (void)
{
    long long int num;

    printf ("Enter a number: ");
    scanf ("%lli", &num);

    findFactor (num);
    printf("\n");

    return 0;
}

