#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int _putchar(char c);

	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
			str = "(nil)";

		for (int j = 0; str[j] != '\0'; j++)
			_putchar(str[j]);

		if (separator != NULL && i < n - 1)
		{
			for (int k = 0; separator[k] != '\0'; k++)
				_putchar(separator[k]);
		}
	}

	_putchar('\n');
	va_end(args);
}
