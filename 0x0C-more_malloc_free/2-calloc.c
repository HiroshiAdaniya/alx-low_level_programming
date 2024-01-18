#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: NULL, else a pointer to a allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;
	unsigned int i, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = nmemb * size;
	z = malloc(i);
	if (z == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		z[j] = 0;
	}
	return (z);
}
