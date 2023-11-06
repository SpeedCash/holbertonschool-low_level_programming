#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings using malloc.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         NULL if s1 or s2 is NULL or if memory allocation fails.
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, len_result, i;
	char *result;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}

	while (s1 && s1[len_s1])
	len_s1++;

	while (s2 && s2[len_s2])
	len_s2++;

	len_result = len_s1 + len_s2 + 1;

	result = (char *)malloc(len_result);

	if (result == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
	result[i] = s1[i];
	}

	for (i = 0; i < len_s2; i++)
	{
	result[len_s1 + i] = s2[i];
	}

	result[len_s1 + len_s2] = '\0';

	return (result);
}

