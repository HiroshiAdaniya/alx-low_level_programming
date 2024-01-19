#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: a pointer, else NULL
 */
int *array_range(int min, int max)
{
	int *z;
	int mem, i = 0;

	if (min > max)
		return (NULL);

	mem = max - min;
	z = malloc(sizeof(int) * mem);
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (i = 0; min < max; i++, min++)
		z[i] = min;
	mem = mem + 1;
	z = realloc(z, sizeof(int) * mem);
	if (z == NULL)
	{	
		free(z);
		return (NULL);
	}
	z[i] = min;
	return (z);
}
