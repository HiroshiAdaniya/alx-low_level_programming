#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an number
 * @array: int array
 * @size: int
 * @cmp: function pointer
 * Return: the specified int, else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		exit(EXIT_FAILURE);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
