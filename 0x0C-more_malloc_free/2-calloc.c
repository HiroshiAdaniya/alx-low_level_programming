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
	unsigned int i, j = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(sizeof(unsigned int) * nmemb);
	if (z == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		z[i] = malloc(size);
		if (z == NULL)
		{
			for (j = i; j > 0; j--)
				free(z[i]);
			free(z);
			return (NULL);
		}
	}
	for (i = 0; i < nmemb; i++)
		z[i] = 0;
	return (z);
}
