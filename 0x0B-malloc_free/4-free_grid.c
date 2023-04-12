#include "main.h"

/**
 * free_grid - function that free a 2 dimensional grid
 * @grid: grid 2d
 * @height: height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
