#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1
 * if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	int guess = 1;

	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (n);
	}

	else
	{

	while (guess * guess <= n)
	{
		if (guess * guess == n)
		{
			return (guess);
		}
		guess++;
	}
	return (-1);
	}
}
