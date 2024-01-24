#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function on an array of elements of an array
 * @array: int array
 * @size: unsigned int
 * @action: function pointer
 * Return: Nothing / void / 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || size == 0 || action == NULL)
		exit(EXIT_FAILURE);

	for (i = 0; i < size; i++)
		action(array[i]);

}
