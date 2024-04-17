#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Unsigned long int / the number that holds the value
 * @index: unsigned int / the index
 * Return: The bit (int), else -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 1;
	unsigned int limit = (sizeof(unsigned long int) * 8 - 1);

	if (index > limit)
		return (-1);
	bit = bit << index;
	if (n & bit)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
