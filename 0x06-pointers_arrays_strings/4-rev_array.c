#include "main.h"
/**
 * reverse_array - entry point, reverses an array
 * @a: array of integers
 * @n: the number of elements to swap
 * Return: a reversed an array by n elements
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int swap = 0;

	for (i = 0; i < n; i++)
	{
		swap = a[n-1];
		a[n-1] = a[i];
		a[i] = swap;
		n--;
	}
}
