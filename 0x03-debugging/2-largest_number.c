#include "main.h"
#include <stdio.h>
/*
 WRONG CODE

int largest_number(int a, int b, int c)
{
    int largest;
 
    if (a > b && b > c)
        largest = a;
    else if (b > a && a > c)
        largest = b;
    else
        largest = c;
     
    return (largest);
}


CORRECT CODE

*/


int largest_number(int a, int b, int c)
{
    int largest;
 
	if (a >= b && a >= c)       /*the first code is wrong as it only works for some that sactify the condition . 
                                 if the function call is largest_number(972,-98,0), it cant work , because b is not greater than c.
                                 if largest_number(972,972, 3), it cant work as well, as a = b which the condition doesnt meet up */
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
 
    return (largest);
}

