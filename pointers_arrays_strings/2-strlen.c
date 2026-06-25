#include "main.h"


/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to point out lenght of string character 
*/


int _strlen(char *s)
{
    int i;
    while (s[i])
    {
        ++i;
    }
    
    return(i);

}
