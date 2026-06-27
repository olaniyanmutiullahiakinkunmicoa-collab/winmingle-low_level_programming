#include <stdio.h>
#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to  print string
*/


void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine where to start printing */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	/* Print the second half */
	while (str[start] != '\0')
	{
		printf("%c", str[start]);
		start++;
	}

	printf("\n");
}
