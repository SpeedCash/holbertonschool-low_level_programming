#include "main.h"

/**
 * puts2 - Write a function that prints every other character
 * of a string, starting with the first character,
 * followed by a new line
 * @str:
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		{
		_putchar(str[j]);
		}
	}
	_putchar('\n');
}
