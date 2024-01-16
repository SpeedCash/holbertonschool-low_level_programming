#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer
 * @name: The name to be printed
 * @f: A pointer to a function that takes a char* as
 * a parameter and returns void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		{
		f(name);
		}
}
