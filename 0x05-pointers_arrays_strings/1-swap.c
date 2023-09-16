#include "main.h"
/**
 * swap_int - Entry point, swaps two integers
 * @a: user input / stdin (0)
 * @b: user input /stdin (0)
 * Return - Swapped integers
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
