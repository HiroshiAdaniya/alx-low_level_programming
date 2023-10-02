#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point, prints array integers
 * @a: user input / stdin (0)
 * @n: user input / stdin (0)
 * Return: Number of elements of an array of integers
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d\n", *(a + i));

}
