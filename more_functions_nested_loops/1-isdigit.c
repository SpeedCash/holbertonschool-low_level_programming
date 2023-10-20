#include "main.h"

/**
 * _isdigit - Write a function that checks
 * for a digit (0 through 9).
 * @c:
 *
 * Return: Always 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return 1;
	}
	return 0;
}
