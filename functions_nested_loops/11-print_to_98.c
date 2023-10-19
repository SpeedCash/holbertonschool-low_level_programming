#include "main.h"

/**
 * print_to_98 - Write a function that prints all natural
 * numbers from n to 98, followed by a new line.
 * @n:
 *
 * Return: 1 if the number is positive. 0 otherwise
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		int num = n, reversed = 0;

		if (n < 0)
		{
			_putchar('-');
			num = -num;
		}

	while (num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}

	if (reversed == 0)
	{
	_putchar('0');
	}

	while (reversed != 0)
	{
	_putchar('0' + reversed % 10);
	reversed /= 10;
	}

	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}

	n++;

	}
	_putchar('\n');
}
