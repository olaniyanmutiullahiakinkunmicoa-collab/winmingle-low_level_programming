#include "main.h"
/**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: fuction definition of lowercase alphabet
 */

int print_sign(int n)
{
   
  
 
    if (n > 0)
      {  
         _putchar('+');
         return 1;
      }        
      
    else if (n == 0)
      {  
         _putchar('0');
         return 0;
              
      }
    else if (n < 0)
      {  _putchar('-');
         return -1;
          
       
  
      }
   
    return 1;
}
