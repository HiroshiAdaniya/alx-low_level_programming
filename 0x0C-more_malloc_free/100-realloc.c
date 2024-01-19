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
	void *p;
	
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		p = ptr;
		free(ptr);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (p);
}