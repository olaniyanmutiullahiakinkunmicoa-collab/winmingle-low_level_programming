#include "main.h"
#include <stdlib.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if only digits, 0 otherwise
 */
int is_digit(char *s)
{
    int i;

    if (s[0] == '\0')
        return (0);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] < '0' || s[i] > '9')
            return (0);
    }

    return (1);
}

/**
 * print_error - prints Error and exits
 */
void print_error(void)
{
    char *message = "Error\n";
    int i;

    for (i = 0; message[i] != '\0'; i++)
        _putchar(message[i]);

    exit(98);
}

/**
 * print_result - prints the multiplication result
 * @result: result array
 * @size: size of result array
 */
void print_result(int *result, int size)
{
    int i;
    int started;

    started = 0;

    for (i = 0; i < size; i++)
    {
        if (result[i] != 0 || started)
        {
            _putchar(result[i] + '0');
            started = 1;
        }
    }

    if (!started)
        _putchar('0');

    _putchar('\n');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
    int len1;
    int len2;
    int size;
    int *result;
    int i;
    int j;
    int digit1;
    int digit2;

    if (argc != 3)
        print_error();

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
        print_error();

    len1 = 0;
    while (argv[1][len1] != '\0')
        len1++;

    len2 = 0;
    while (argv[2][len2] != '\0')
        len2++;

    size = len1 + len2;

    result = malloc(sizeof(int) * size);

    if (result == NULL)
        print_error();

    for (i = 0; i < size; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        digit1 = argv[1][i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            digit2 = argv[2][j] - '0';

            result[i + j + 1] += digit1 * digit2;
        }
    }

    for (i = size - 1; i > 0; i--)
    {
        result[i - 1] += result[i] / 10;
        result[i] %= 10;
    }

    print_result(result, size);

    free(result);

    return (0);
}
