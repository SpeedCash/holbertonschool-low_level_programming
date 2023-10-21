#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Write a function that draws a diagonal line on the terminal
 * @i:
 * @j:
 * @n:0
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	return;
	}

	for (i = 0; i < n; ++i)
	{

	for (j = 0; j < i; ++j)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
