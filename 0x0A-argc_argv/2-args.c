#include <stdio.h>

/*
school: winmingle
topic: program that prints all arguments passed to it.
*/

int main(int argc, char *argv[] )
{

    (void)argc;
    for (int i = 0; i < argc; ++i )
    {
        printf("argv[%d] = %s\n",i, argv[i]);
    }
    return 0;
}
