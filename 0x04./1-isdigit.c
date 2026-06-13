#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: Deburging cause of infinite loop
 */

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);

    return (0);
}
