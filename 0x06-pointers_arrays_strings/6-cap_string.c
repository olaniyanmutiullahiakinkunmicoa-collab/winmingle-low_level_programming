#include "main.h"

/**
* main - causes an infinite loop
 * Author: Olaniyan Mutiullahi Akin
 * Program: WinMingle Community C Training
 * Description: function to capitalize all words in string
*/ 

char *cap_string(char *str)
{
	int i = 0;
	int cap = 1;

	while (str[i] != '\0')
	{
		if (cap && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
			cap = 1;
		else
			cap = 0;

		i++;
	}

	return (str);
}
