#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: a pointer to the memory allocated, else 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
