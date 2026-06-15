#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print n number of line  
*/

void print_line(int n)
{
    int c;

    for (c = 0; c < n; c++)
        _putchar('_');

    _putchar('\n');
}
