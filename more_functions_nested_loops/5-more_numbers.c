#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 *
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j, digit1, digit2;

		for (i = 0; i < 10; i++)
		{

		for (j = 0; j <= 14; j++)
		{

		if (j > 9)
			{
			digit1 = j / 10;
				_putchar('0' + digit1);
			}
			digit2 = j % 10;
			_putchar('0' + digit2);
		}
		_putchar('\n');
		}
}
