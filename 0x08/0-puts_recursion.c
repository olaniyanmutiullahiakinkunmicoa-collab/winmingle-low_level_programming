#include "main.h"


/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print   string
*/

void _puts_recursion(char *s)

{
     
   

    
    if ( *s == '\0' )

    {
        _putchar ('\n');
        return;
    }

    _putchar(*s);
    _puts_recursion(s+1);    
}
