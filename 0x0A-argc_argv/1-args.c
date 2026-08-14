#include <stdio.h>
/* school: Winmingle
   topic: program that prints the number of arguments passed into it*/

int main (int argc, char *argv[])
{
    (void)argv;
    
    printf("The number of arguments passed is %d\n", (argc-1) );

    return 0;
}

