#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates a grid
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to created grid. NULL if height or width is 0 or negative,
 * or if space is insufficient.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
