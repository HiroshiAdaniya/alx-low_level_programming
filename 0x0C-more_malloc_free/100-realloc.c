#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: a pointer, else NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	p = ptr;
	free(ptr);
	return (p);
}
