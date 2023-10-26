#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers
 * @n: entier
 * @a: pointeur
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
