#include "main.h"
#include <stdio.h>

/**
 * print_binary - Imprime la représentation binaire d'un nombre.
 * @n: Le nombre dont il faut imprimer la représentation binaire.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	while (mask && !(n & mask))
		mask >>= 1;

	if (!mask)
		{
		_putchar('0');
		return;
		}

	while (mask)
		{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
		}
}

