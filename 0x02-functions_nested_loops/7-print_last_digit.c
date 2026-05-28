#include "main.h"
/**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: fuction definition of lowercase alphabet
 */

int print_last_digit(int number)
{
    int last_digit;
    last_digit = number % 10;
    if (last_digit < 0)
      { 
        last_digit = -last_digit;
       }
       _putchar ( last_digit + '0' );



    return last_digit;
}
