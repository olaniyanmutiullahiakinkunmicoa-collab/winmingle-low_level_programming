#include <stdio.h>
/**
* Author: Olaniyan Mutiullahi Akin
* Program: WinMingle Community C Training
* Description: the display of first 98 Fibonacci number.
*/
int main(void)
{
    unsigned long a1 = 0, a2 = 1;
    unsigned long b1 = 0, b2 = 2;
    unsigned long c1, c2;
    unsigned long base = 1000000000;
    int i;

    printf("1, 2");

    for (i = 3; i <= 98; i++)
    {
        c1 = a1 + b1;
        c2 = a2 + b2;

        if (c2 >= base)
        {
            c1 += c2 / base;
            c2 %= base;
        }

        if (c1 == 0)
            printf(", %lu", c2);
        else
            printf(", %lu%09lu", c1, c2);

        a1 = b1;
        a2 = b2;

        b1 = c1;
        b2 = c2;
    }

    printf("\n");

    return (0);
}









   
