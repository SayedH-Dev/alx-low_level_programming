#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - function that frees a 2D array
  * @grid: 2D array
  * @height: hight of the latest array
  * Return: void
  */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL)
	{
		if (height > 0)
			for (x = height ; x >= 0 ; x--)
			{
				free(grid[x]);
			}
		free(grid);
	}
}
