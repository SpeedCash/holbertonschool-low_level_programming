#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - Write a function that capitalizes
 * all words of a string
 * @s: retour
 *
 * Return: Pointer to the modified string
 */

char *cap_string(char *s)
{
	int capitalize_next = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n')
		{
			capitalize_next = 1;
		}

		else if (islower(s[i]))
		{

			if (capitalize_next == 1)
			{
				s[i] = toupper(s[i]);
				capitalize_next = 0;
			}
		}
		else
		{
			capitalize_next = 0;
		}
	}

	return (s);
}
