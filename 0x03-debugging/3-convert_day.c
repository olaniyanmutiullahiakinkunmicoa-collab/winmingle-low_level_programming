#include "main.h"

/**
 * convert_day - converts month and day to day of year
 * @month: month of year
 * @day: day of month
 *
 * Return: day of year
 */
int convert_day(int month, int day)
{
    int i;
    int days_per_month[] = {
        0, 31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    for (i = 1; i < month; i++)
        day += days_per_month[i];

    return (day);
}
