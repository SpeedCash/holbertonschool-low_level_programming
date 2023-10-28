#include <stdio.h>

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: A pointer to the destination memory area.
 * @src: A pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *original_dest = dest;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
	}

	return (original_dest);
}
