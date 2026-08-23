#include <stdio.h>
#include <stdlib.h>

/*multiply two arguments displayed on  linux terminal*/


int main (int argc, char *argv[])
{
    int firstArgument;
    int secondArgument;
    {
        if (argc != 3) 
        {   
             printf("Error\n");
             return 1;
        } 
     
        firstArgument = atoi(argv[1]);  
        secondArgument = atoi (argv[2]);   
     printf("the product is %d\n", firstArgument * secondArgument );

    }
  return 0;
}
