#include <stdio.h>

/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to search within
 * @accept: The string containing characters to search for
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (*s != '\0')
	{
	int found = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (*s == accept[i])
		{
			found = 1;
		break;
		}
	}

	if (found)
	{
		count++;
		s++;
	}
	else
	{
		break;
	}
	}

	return (count);
}
