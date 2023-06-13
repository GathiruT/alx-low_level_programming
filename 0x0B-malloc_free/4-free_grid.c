#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees up memory space of a grid
 *
 * @grid: double pointer to the grid
 * @height: height of the grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
