#include <stdio.h>
#include "main.h"

int main(void)
{
    int day;
    int month;
    int year;

    year = 2000;
    month = 2;
    day = 29;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}
