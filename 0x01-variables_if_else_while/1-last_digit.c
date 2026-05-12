/*Author: Olaniyan mutiullahi Akin
 *Program: WinMingle Community C Training
 *Description:  0-positive_or_negative.c */



#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () 
{   int n, last_digit ;
    srand(time(0));
    n = rand() - RAND_MAX / 2 ;
    last_digit = n % 10;
    printf (" Last digit of %i is %i ", n, last_digit);
    if  (n > 5 )
        printf("and %i is greater than 5\n", n);
    else if  (n == 0)
        printf(" and %i is 0 \n", n); 
    else if (n < 6 && n != 0)
        printf("and %i is lessthan 6 and  not 0\n", n);   






    return 0;
}

