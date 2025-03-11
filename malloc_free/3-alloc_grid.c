#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocate memory for 2d array
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: The grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (x = 0; x < y; x++)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (x = 0; x < height; x++)
			grid[y][x] = 0;
	}

	return (grid);
}
