 /**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: Alphabet in lowercase
 */

#include <stdio.h>


 int main () 

{   int a , b;


a = 0; 

    while (a <=98)
        {b = a +1;
        while (b <= 99)
            {putchar ((a / 10) + '0');
             putchar ((a % 10) + '0' );
             putchar ((b / 10) + '0' );
             putchar ((b % 10) + '0' );
             if (a != 98 || b != 99 )
                {putchar (',');
                putchar (' ');}
            b++;}

        a++;}

        
         
    putchar ('\n');


  

    return 0;
}

