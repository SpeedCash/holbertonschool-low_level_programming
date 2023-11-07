#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free the memory of a 2D integer grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 *
 * This function frees the memory allocated for a 2D integer grid created
 * by the alloc_grid function.
 */

void free_grid(int **grid, int height)
{
    int i;

    if (grid != NULL && height > 0)
    {
        for (i = 0; i < height; i++)
        {
          free(grid[i]);
        }
        free(grid);
    }
}
