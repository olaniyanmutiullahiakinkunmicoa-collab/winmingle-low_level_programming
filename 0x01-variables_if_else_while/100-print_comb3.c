 /**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: Alphabet in lowercase
 */

#include <stdio.h>


 int main () 

{   int a , b;

a = 0;

    while (a <= 8)
        {b = a +1;
        while (b <= 9)
            {putchar ('0' + a);
             putchar ('0' + b);
             if (a != 8 || b != 9 )
                {putchar (',');
                putchar (' ');}
            b++;}

        a++;}

        
         
    putchar ('\n');


  

    return 0;
}

