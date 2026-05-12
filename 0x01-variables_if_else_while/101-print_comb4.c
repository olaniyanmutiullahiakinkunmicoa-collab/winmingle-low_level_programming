 /**
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: Alphabet in lowercase
 */

#include <stdio.h>


 int main () 

{   int a , b, c;

a = 0 ;

    while (a <= 7)
        {b = a +1;
        while (b <= 8)
            {c = b + 1;
            while (c <= 9 )
    
                {putchar ('0' + a);
                putchar ('0' + b);
                putchar ('0' + c);
                if (a != 7 || b != 8 || c != 9 )
                    {putchar (',');
                    putchar (' ');}
                    c++;} 

            b++;}
            

        a++;}
        
         
    putchar ('\n');


  

    return 0;
}

