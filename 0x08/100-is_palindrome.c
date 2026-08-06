#include "main.h"

/* Helper: returns length of string */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + str_len(s + 1));
}

/* Helper: compares characters from both ends */
int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = str_len(s);

	return (palindrome_helper(s, 0, len - 1));
}
