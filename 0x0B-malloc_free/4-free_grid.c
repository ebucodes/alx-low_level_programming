#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memory
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: clean up memory
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	free(grid[a]);
	free(grid);
}
