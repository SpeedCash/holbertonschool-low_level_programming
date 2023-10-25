#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Write a function that copies a string
 * @dest: dest
 * @src: source
 * @n:
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (i < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
