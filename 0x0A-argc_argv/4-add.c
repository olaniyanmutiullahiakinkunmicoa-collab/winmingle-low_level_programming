#include <stdlib.h>
#include <stdio.h>

/*function to add positive  number  only*/

int main (int argc, char *argv[])
{
    int i; /*stringIndex*/
    int j; /*characterindex*/
    int sum = 0;
    if (argc == 1)
    {
        printf("0");
    }
    

    for(i = 1; i < argc; ++i )
    {
        for(j = 0; argv[i][j] != '\0'; ++j)
        {
            if (argv[i][j] < '0' || argv[i][j] > '9')
            {

               printf("Error\n");
               return 1;

            }
         sum += atoi( argv[i]);
        }
    }
    printf("%d\n",sum);
return 0;
}
