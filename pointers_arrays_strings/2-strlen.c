#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 * @i:
 * @s:_strlen
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		++i;

	return (i);
}
