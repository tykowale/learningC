/*Program to see fall through in switch statements*/

#include <stdio.h>

int main (void)
{
    int num = 1;

    switch (num)
    {
        case 1:
            printf ("Num one hit.\n");
        case 2:
            printf ("Num two hit.\n");
        case 3:
            printf ("Num three hit.\n");
        default:
            printf ("Default hit.\n");
    }

    return 0;
}

