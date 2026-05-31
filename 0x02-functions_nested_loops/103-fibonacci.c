#include <stdio.h>
int main (void)
{
    
    unsigned long previous = 1;
    unsigned long next =  2;

    unsigned long new;
    unsigned long sum = 2;

   
    while (1)
{
        new = previous + next;
        if (new > 4000000)
            break;    
        if (new % 2 == 0)       
            sum += new ;
        previous = next;
        next = new;
}     
    printf("%lu\n", sum);            
    
    
return 0;
}
