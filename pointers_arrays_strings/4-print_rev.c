#include <stdio.h>
#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to  print  a string in reverse
*/

void print_rev(char *s)
{
    
    int len = 0;
    
    
    while (s[len] != '\0')
    {
        ++len;
    }
    
    while (len > 0)
    {
        --len;
        printf("%c", s[len]);
    }
        printf ("\n");
}



