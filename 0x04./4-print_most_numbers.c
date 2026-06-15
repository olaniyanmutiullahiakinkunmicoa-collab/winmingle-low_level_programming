#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print from 0 to 9, except 4 and 2
 */
void print_most_numbers(void)
{
    char  c;
    for (c = '0'; c <= '9'; ++c)
    {       
            if (c != '2'&& c != '4')
            {    
                _putchar (c  );
            }
            
    }
     _putchar ('\n');    
}
