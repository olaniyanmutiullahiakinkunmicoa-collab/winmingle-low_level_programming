#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print from 0 to 14, ten times
*/ 
void more_numbers(void)
{
    int i, c;
    for (i = 0 ; i <10 ; ++i)
    {
        for (c = 0; c <= 14; ++c)
        {
            if (c > 9)
                _putchar ('1');
            _putchar ((c % 10) + '0');
            

        }
     _putchar ('\n');   
    }
        
}








