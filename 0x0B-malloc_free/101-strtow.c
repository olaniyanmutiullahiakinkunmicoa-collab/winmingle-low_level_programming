#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings, or NULL
 */
char **strtow(char *str)
{
    char **words;
    int count = 0;
    int i = 0;
    int j;
    int word = 0;
    int start;
    int end;
    int len;

    if (str == NULL || *str == '\0')
        return (NULL);

    /*
     * Count the number of words
     */
    while (str[i] != '\0')
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            count++;
        i++;
    }

    if (count == 0)
        return (NULL);

    words = malloc((count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    i = 0;

    while (str[i] != '\0')
    {
        /*
         * Skip spaces
         */
        while (str[i] == ' ')
            i++;

        if (str[i] == '\0')
            break;

        start = i;

        /*
         * Find the end of the word
         */
        while (str[i] != '\0' && str[i] != ' ')
            i++;

        end = i;
        len = end - start;

        words[word] = malloc((len + 1) * sizeof(char));

        if (words[word] == NULL)
        {
            while (word > 0)
            {
                word--;
                free(words[word]);
            }

            free(words);
            return (NULL);
        }

        /*
         * Copy the word
         */
        for (j = 0; j < len; j++)
            words[word][j] = str[start + j];

        words[word][len] = '\0';

        word++;
    }

    words[word] = NULL;

    return (words);
}
