/*Function to cout the number of characters in a string*/

#include <stdio.h>

int string_length (const char string[])
{
    int count = 0;

    while ( string[count] != '\0' ) {
        ++count;
    }

    return count;
}

int main (void)
{
    int string_length (const char string[]);
    const char word1[] = "random";
    const char word2[] = "Tyler";
    const char word3[] = { 't', 'y', '\0' };

    printf ("%i %i %i\n", string_length(word1), string_length(word2), string_length(word3));

    return 0;
}

