#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees 2d grid previously created by my alloc_grid function.
  * @grid: pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
