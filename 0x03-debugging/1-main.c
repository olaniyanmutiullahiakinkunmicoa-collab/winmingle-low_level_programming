#include <stdio.h>
 
/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: Deburging cause of infinite loop
 */

int main(void)
{
    int i;
 
    printf("Infinite loop incoming :(\n");
 
    i = 0;
 
    while (i < 10)
    {
        putchar(i + '0');
        ++i;    /* the increment assignment of i is not added ,which I enventually added */
    }
 
    printf("Infinite loop avoided! \\o/\n");
 
    return (0);
}

