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
	/* mem will not include the last int which is max */

	z = malloc(sizeof(int) * mem + 1);
	/* increasing the size by an extra int, will help include the max value */
	if (z == NULL)
		return (NULL);
	/* this loop will assigns the values to the pointer */
	for (i = 0; min <= max; i++, min++)
		z[i] = min;
	return (z);
}
