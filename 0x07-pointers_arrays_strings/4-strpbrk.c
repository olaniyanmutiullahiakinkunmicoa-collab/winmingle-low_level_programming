#include "main.h"
/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: pointer to first matching character
 */


char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return (0);
}
