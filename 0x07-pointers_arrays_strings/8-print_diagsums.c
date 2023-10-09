#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of a square matric of integers
 * @a: array / stdin (0)
 * @size: int / stdin (0)
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int c = 0;
	int d1 = 0;
	int d2 = 0;

	for (; c < size; c++)
	{
		d1 = d1 + a[(c * size) + c];

		d2 = d2 + a[(c * size) + (size - c - 1)];
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
