#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each,
 *           and initializes the memory to zero.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the newly allocated memory, or NULL if allocation fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned char *byte_ptr;
    unsigned int i;

    if (nmemb == 0 || size == 0) {
        return NULL;
    }

    ptr = malloc(nmemb * size);

    if (ptr == NULL)
    {
        return NULL;
    }

    byte_ptr = ptr;
    for (i = 0; i < nmemb * size; i++)
    {
        byte_ptr[i] = 0;
    }

    return ptr;
}
