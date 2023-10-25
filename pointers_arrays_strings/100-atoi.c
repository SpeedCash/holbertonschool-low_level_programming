#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer
 * @s:
 *
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == '-')
	{
		sign *= -1;
	}
	else if (s[i] == '+')
	{

	}
	else if (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
	}
	else if (result != 0)
	{
		break;
	}
}

	return (result * sign);
}

