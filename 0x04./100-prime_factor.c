#include <stdio.h>
/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: programm to find highest factor
*/
/**
 * main - finds and prints the largest prime factor
 * of 612852475143
 *
 * Return: 0
 */
int main(void)
{
    unsigned long n = 612852475143;
    unsigned long factor = 2;

    while (factor * factor <= n)
    {
        if (n % factor == 0)
            n /= factor;
        else
            factor++;
    }

    printf("%lu\n", n);

    return (0);
}
