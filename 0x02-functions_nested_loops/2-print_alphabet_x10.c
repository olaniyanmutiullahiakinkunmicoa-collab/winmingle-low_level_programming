
#include "main.h"
 /**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: fuction definition of lowercase alphabet
 */

void print_alphabet_x10(void) 
{
    int x;
    int i;
    for (i = 0; i <= 10; ++i)    
       { for( x = 'a'; x <= 'z'; ++x)
        { _putchar (x);
        }
        
        _putchar ('\n');
       } 
}

