#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 *           containing a copy of the string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL
 */
char *_strdup(char *str)
{
    char *copy;

    if (str == NULL)
        return (NULL);

    copy = malloc(strlen(str) + 1);

    if (copy == NULL)
        return (NULL);

    strcpy(copy, str);

    return (copy);
}
