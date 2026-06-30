#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to generate crack password
*/

#

int main(void)
{
	char charset[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789";
	int i;

	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		printf("%c", charset[rand() % 62]);
	}

	printf("\n");

	return (0);
}

