#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to  print string
*/

void _puts(char *str)
{
    
 

    while (*str) 
    {
        _putchar (*str );
        ++str;
    }
        
        _putchar ('\n');
}
