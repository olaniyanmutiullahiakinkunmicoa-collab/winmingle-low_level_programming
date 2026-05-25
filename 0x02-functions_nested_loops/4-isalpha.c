#include "main.h"
/**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: fuction definition of lowercase alphabet
 */

 int _isalpha(int c) 
{
    if ( (c >= 'a' && c <= 'z') || (c >='A' && c <= 'Z')  )               {  return 1;
      }

        else 
           { return 0;
           }
}

