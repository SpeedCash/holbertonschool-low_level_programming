#include "main.h"

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout
 * @str:
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
        ++i;
	}

	_putchar('\n');
}
