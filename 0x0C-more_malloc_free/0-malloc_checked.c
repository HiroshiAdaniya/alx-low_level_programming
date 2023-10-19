#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: unsigned int / stdin (0)
 * Return: a pointer to allocated memeory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *m;

	*m = malloc(sizeof(unsigned int) * b);
	if (m == NULL)
	{
		free(m);
		return (98);
	}
	return (m);
}
