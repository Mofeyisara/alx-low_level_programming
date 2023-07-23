#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Free 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: Height
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
