#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print n number of line
*/

void print_square(int size)
{
    int i ,j;
    if ( size <= 0)
    {
        _putchar ('\n');
        return ;        
    }
    for (j =0; j < size; ++j )
    {
        for (i = 0; i < size; ++i)
        {
            _putchar ('#');
        } 
        _putchar ('\n');
    }
}
