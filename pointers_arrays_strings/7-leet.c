#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - Write a function that encodes a string into 1337
 * @s: retour
 *
 * Return: Pointer to the modified string
 */

char *leet(char *s)
{
	int i = 0;
	int index;

	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (i = 0; s[i]; i++)
	{
		char *p = strchr(letters, s[i]);

		if (p)
	{
		index = p - letters;
		s[i] = numbers[index];
	}
	}
	return (s);
}
