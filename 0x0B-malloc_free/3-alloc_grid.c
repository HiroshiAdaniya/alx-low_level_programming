#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2D array
 * @width: int / stdin (0)
 * @height: int / stdin (0)
 * Return: NULL on failure or if either int is negative or 0, a pointer
 */
int **alloc_grid(int width, int height)
{
	int **i = 0;
	int h, w; 

	if (width <= 0 || height <= 0)
		return (NULL);
	i = (int **)malloc(sizeof(int *) * height);
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (w = 0; w < width; w++)
	{
		i[w] = (int *)malloc(width * sizeof(int));
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			i[h][w] = 0;
	}
	return (i);
}
