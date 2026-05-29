#include "main.h"
/**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: fuction definition of Times Table
 */
void times_table(void)
{
    int row, col, result;
    for (row = 0; row <= 9; ++row)
    {     
        for (col = 0; col <= 9; ++col)
        {
            result = row * col;
            if (col == 0) 
            {     
              _putchar (result + '0');
            }           

            else
            {
                _putchar(',');
                _putchar(' ');
            
            
                if (result < 10) 
                {
                    _putchar(' ');
                    _putchar (result + '0');                
                }
                else 
                {
                    _putchar((result / 10) + '0'); 
                    _putchar((result % 10) + '0'); 
                }    
        
        
            }

               
        }
            _putchar ('\n');

    }

}
