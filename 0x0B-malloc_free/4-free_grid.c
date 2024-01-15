#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2D grid
 * @grid: int pointer to a 2d array
 * @height: int
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
