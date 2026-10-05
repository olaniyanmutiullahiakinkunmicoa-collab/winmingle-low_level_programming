#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the old memory block
 * @old_size: size of the old memory block
 * @new_size: size of the new memory block
 *
 * Return: pointer to the new memory block, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    char *old_bytes;
    char *new_bytes;
    unsigned int copy_size;
    unsigned int i;

    if (ptr == NULL)
        return (malloc(new_size));

    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }

    if (new_size == old_size)
        return (ptr);

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return (NULL);

    if (old_size < new_size)
        copy_size = old_size;
    else
        copy_size = new_size;

    old_bytes = ptr;
    new_bytes = new_ptr;

    for (i = 0; i < copy_size; i++)
        new_bytes[i] = old_bytes[i];

    free(ptr);

    return (new_ptr);
}
