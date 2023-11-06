#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a 2D integer array and initialize it to 0.
 * @width: The width (number of columns) of the array.
 * @height: The height (number of rows) of the array.
 *
 * Return: A pointer to the newly allocated 2D array.
 * NULL if width or height is less than or equal to 0
 * or if memory allocation fails.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(width * sizeof(int));

	if (grid[i] == NULL)
	{

	for (j = 0; j < i; j++)
	{
	free(grid[j]);
	}
	free(grid);

	return (NULL);
	}

	for (j = 0; j < width; j++)
	{
	grid[i][j] = 0;
	}
	}
	return (grid);
}
