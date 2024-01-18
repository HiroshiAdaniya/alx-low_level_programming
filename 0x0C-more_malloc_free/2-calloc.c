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
	void **z = 0;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	z = malloc(sizeof(unsigned int) * nmemb);
	if (z == NULL)
	{
		free(z);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		z[i] = malloc(size);
		if (z == NULL)
		{
			free(z);
			return (NULL);
		}
	}

	for (i = 0; i < nmemb; i++)
	{
		z[i] = 0;
	}

	return (z);
}
