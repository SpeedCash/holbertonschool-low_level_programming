#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything, depending on the format.
 * @format: A string representing the format of the arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *str;
	const char *formats = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j])
		{
			if (format[i] == formats[j])
			{
				if (i > 0)
					printf(", ");

				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char*);
						if (str == NULL)
							str = "(nil)";
						printf("%s", str);
						break;
				}
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
