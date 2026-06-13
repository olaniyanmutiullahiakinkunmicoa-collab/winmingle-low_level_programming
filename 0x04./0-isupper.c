#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: writing function to check for upper
/

/
 * _isupper - checks for uppercase character
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);

    return (0);
}
