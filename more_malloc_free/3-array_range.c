#include "main.h"
#include <stdlib.h>

/**
 * array_range - Allocates memory for an array of integers ranging from min to max (inclusive).
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 *
 * Return: A pointer to the newly allocated integer array, or NULL if allocation fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return NULL;
	}

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
	{
		return NULL;
	}

	for (i = 0; i <= max - min; i++)
	{
		arr[i] = min + i;
	}

	return arr;
}
