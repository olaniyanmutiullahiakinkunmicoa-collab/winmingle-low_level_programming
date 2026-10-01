#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    char *result;
    int i;
    int total;

    if (ac == 0 || av == NULL)
        return (NULL);

    total = 0;

    for (i = 0; i < ac; i++)
        total += strlen(av[i]) + 1;

    result = malloc(total + 1);

    if (result == NULL)
        return (NULL);

    result[0] = '\0';

    for (i = 0; i < ac; i++)
    {
        strcat(result, av[i]);
        strcat(result, "\n");
    }

    return (result);
}
