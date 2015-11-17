/*Program to illustrate structure pointers*/

#include <stdio.h>

int main (void)
{
    struct date {
        int month;
        int day;
        int year;
    };

    struct date today, *date_ptr;
    date_ptr = &today;

    date_ptr->month = 11;
    date_ptr->day = 16;
    date_ptr->year = 2015;

    printf ("Today's date is %i/%i/%.2i.\n",
            date_ptr->month, date_ptr->day, date_ptr->year % 100);

    return 0;
}

