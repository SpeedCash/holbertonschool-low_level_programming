#include "main.h"

/**
 * rev_string - Write a function that reverses a string
 * @s:
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char temp;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len / 2; i++)
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
}

