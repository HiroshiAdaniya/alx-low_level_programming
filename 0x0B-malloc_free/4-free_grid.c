#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2d grid
 * @grid: a double pointer grid / stdin (0)
 * @height: int / stdin (0)
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int H = 0;

	for (H = height; H >= 0; H--)
	{
		free(grid[H]);
	}
	free(grid);
}
