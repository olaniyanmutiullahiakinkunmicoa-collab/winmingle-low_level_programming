#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print nth diagonal
*/

void print_diagonal(int n)
{
    int c,d;
    if (n <= 0)
        _putchar('\n');

    for (c = 0 ; c < n; c++)
    {    for (d =0 ; d < c; ++d)
         {   
            _putchar(' ');

         }
        
        _putchar('\\');
        _putchar('\n');
    }


      
}
