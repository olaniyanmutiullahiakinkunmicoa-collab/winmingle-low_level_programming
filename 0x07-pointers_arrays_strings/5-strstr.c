#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to locate a character
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}

	return (0);
}
