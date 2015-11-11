/*Changing array elements in functions*/

#include <stdio.h>

void multiply_by_2 (float array[], int n)
{
    int i;

    for ( i = 0; i < n; ++i ) {
        array[i] *= 2;
    }
}

int main (void)
{
    float float_vals[] = { 1.2f, -3.7f, 6.2f, 8.55f };
    int i;
    void multiply_by_2 (float array[], int n);

    multiply_by_2 (float_vals, 4);

    for ( i = 0; i < 4; ++i ) {
        printf ("%.2f ", float_vals[i]);
    }

    printf ("\n");

    return 0;
}

