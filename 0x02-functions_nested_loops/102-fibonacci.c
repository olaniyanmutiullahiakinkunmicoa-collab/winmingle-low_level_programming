#include <stdio.h>
/**
* Author: Olaniyan Mutiullahi Akin
* Program: WinMingle Community C Training
* Description: the display of first 50 Fibonacci number.
*/ 
int main (void)
{
    unsigned long new;
    int previous =1;
    int next = 2;
    int i = 3;
    printf("%d,%d", previous, next);

    while (  i <= 50)
    {
        new = previous + next;
        printf(",%lu", new);
        ++i;
    
        previous = next;
        next = new;
    }    
         
    printf("\n");
    

return 0;
}
