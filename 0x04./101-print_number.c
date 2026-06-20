#include  "main.h"


/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: funtion to print abs number

*/
/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        print_number(num / 10);

    _putchar((num % 10) + '0');
}
