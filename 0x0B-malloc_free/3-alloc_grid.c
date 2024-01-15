#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a pointer to a 2D array
 * @width: int
 * @height: int
 * Return: NULL; on failure / if width or height is 0 / neagtive
 */
int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **a;

	if (width == 0 || width < 0)
		return (NULL);
	if (height == 0 || height < 0)
		return (NULL);

	a = (int **)malloc(sizeof(int) * width);

	for (; i < width; i++)
		a[i] = (int *)malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
			a[i][j] = 0;
	}

	return (a);
}
