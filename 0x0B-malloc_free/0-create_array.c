#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an arrays of chars, initializes it
 * @size: unsigned int / stdin (0)
 * @c: char / stdin (0)
 * Return: NULL if size if 0 or failed, else a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *z;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	z = (char *)malloc(sizeof(char) * size);
	if (z == NULL)
		return (NULL);
	while (i < size)
	{
		z[i] = c;
		i++;
	}

	return (z);
}
