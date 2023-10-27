#include "main.h"
#include <stddef.h>

/**
 * _memset - Write a function that fills memory with a constant byte
 * @s: tableau
 * @b: byte
 * @n: unsigned
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
