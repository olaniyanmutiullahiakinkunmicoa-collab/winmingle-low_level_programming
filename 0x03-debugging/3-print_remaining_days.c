#include <stdio.h>
#include "main.h"

/*
Buggy code
void print_remaining_days(int month, int day, int year)
{
    if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))  * BUG #1 
    {
        if (month >= 2)   BUG #2 
            day = day + 2;   BUG #3 

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 365 - day);  BUG #4 
    }
  else
    {
        if (month == 2 && day == 60)
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year); * BUG #5/ 
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 366 - day);  BUG #6 
        }
    }
}

        Non Buggy code   */ 

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) /* the first code is wrong ,as the its condition never sactify leap year.
                                                                 Leap year is either a year divisible by 4 not 100 e.g year 2004 or 
                                                                  a year divisibe by 400 e.g 2000. 
                                                                 So, year 2100 is not leap one , because it is neither divisible by 400 nor 4                                                                    but divisible by 100*/
    {
        if (month > 2)        /* the first code is wrong because equality sign . following months are needed,excluding february but the equality                              sign will include February*/
        	day++;            /* increment by 1 ,not 2, is needed as Leap year affects the other months by 1, not 2*/
 
        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);       /*A leap year is 366 day not 365. So the first code is buggy*/
    }
    else
    {
        if (month == 2 && day == 60)
        	printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);    /* The code is designed to print exact day of Febuary here  but                                                                                   the first code prints the sum total of Jan and Feb*/
        else
        {
        	printf("Day of the year: %d\n", day);
        	printf("Remaining days: %d\n", 365 - day);               /* the last esle statement tests for non-leap years. So, non-leap year is                                                                     365 not 366. As a result, the first code is buggy*/
        }
    }
}


