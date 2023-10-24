#include "main.h"

/**
 * puts_half - Write a function that prints half
 * of a string, followed by a new line
 * @str:
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
