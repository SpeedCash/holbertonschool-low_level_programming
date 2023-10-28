#include <stdio.h>

/**
 * _strchr - Locate a character in a string
 * @s: The string to search within
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}

	return (NULL);
}
