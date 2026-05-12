/*Author: Olaniyan mutiullahi Akin
 *Program: WinMingle Community C Training
 *Description:  0-positive_or_negative.c */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () 
{   int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2 ;
    if  (n > 0 )
        printf("%i is positive\n", n);
    else if  (n == 0)
        printf("%i is zero\n", n); 
    else if (n < 0)
        printf("%i is negative\n", n);   






    return 0;
}

