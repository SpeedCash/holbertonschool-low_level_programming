#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string.
 *         NULL if str is NULL or if memory allocation fails.
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0, i;

	if (str == NULL)
	return (NULL);

	while (str[length])
	length++;

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return (NULL);

	for (i = 0; i <= length; i++)
	duplicate[i] = str[i];

	return (duplicate);
}

