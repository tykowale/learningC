/*Function to determine if two strings are equal*/

#include <stdio.h>

int my_str_cmp (const char s1[], const char s2[])
{
    int i = 0;
    int are_equal = 0;

    while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' ) {
        ++i;
    }

    if ( s1[i] == '\0' && s2[i] == '\0' ) {
        are_equal = 1;
    }

    return are_equal;
}

int main (void)
{
    int my_str_cmp (const char s1[], const char s2[]);
    const char str_a[] = "string compare test";
    const char str_b[] = "string";

    printf ("%i\n", my_str_cmp (str_a, str_b));
    printf ("%i\n", my_str_cmp (str_a, str_a));
    printf ("%i\n", my_str_cmp (str_b, "string"));
}

