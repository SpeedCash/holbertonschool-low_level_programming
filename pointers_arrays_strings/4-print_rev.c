#include "main.h"

/**
 * print_rev - Write a function that prints a string,
 * in reverse, followed by a new line
 * @s:
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	length--;

	while (length >= 0)
	{
	_putchar(s[length]);
	length--;
	}

	_putchar('\n');
}
