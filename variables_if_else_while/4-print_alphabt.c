#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char tc;

	for (tc = 'a' ; tc <= 'z' ; tc++)
	{
		if (tc != 'q' && tc != 'e')
		putchar(tc);
	}

	putchar('\n');

	return (0);
}
