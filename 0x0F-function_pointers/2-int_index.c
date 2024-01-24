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

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
