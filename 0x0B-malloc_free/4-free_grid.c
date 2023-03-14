#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a grid made by alloc_grid
 * @grid: The input grid.
 * @height: The height of the input grid.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
