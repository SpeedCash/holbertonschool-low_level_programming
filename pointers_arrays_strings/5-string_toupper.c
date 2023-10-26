#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Write a function that changes
 * all lowercase letters of a string to uppercase
 * @s: retour
 *
 * Return: Pointer to the modified string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
		s[i] = s[i] - ('a' - 'A');
		}
	}
	return (s);
}
