#include "main.h"
#include <stdlib.h>
/**
 * *create_array - Creates array of chars, initializes with a specific char
 * @size: unsigned int / stdin (0)
 * @c: char / stdin (0)
 * Return: pointer to array or NULL if it fails, else a NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(sizeof(char) * size);
	unsigned int j = 0;

	if (size == 0)
		return (NULL);
	while (j < size)
	{
		i[j] = c;
		j++;
	}
	return (i);
}
