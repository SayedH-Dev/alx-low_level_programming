#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2D array
  * @width: width of array
  * @height: height of array
  * Return: pointer to the 2D array
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int x;
	int y;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (x = 0 ; x < height ; x++)
	{
		grid[x] = malloc(width * sizeof(int));
		if (grid[x] == NULL)
		{
			for (x-- ; x >= 0 ; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
	}

	for (x = 0 ; x < height ; x++)
		for (y = 0 ; y < width ; y++)
			grid[x][y] = 0;

	return (grid);
}
