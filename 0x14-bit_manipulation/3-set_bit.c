#include "main.h"
/**
 * set_bit - Sets a bit to 1 at a given index
 * @n: unsigned long int / the value that will be changed
 * @index: unsigned int / the index
 * Return: 1 on success, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int limit = (sizeof(unsigned long int) * 8 - 1);
	int bit = 1;
	unsigned long int newbit = 0;

	if (index > limit)
		return (-1);
	bit = bit << index;

	if (*n & bit)
		bit = 1;
	else if (*n | bit)
	{
		newbit = *n;
		*n = *n + bit;
		if (*n != newbit)
			bit = 1;
		else
			bit = -1;
	}

	return (bit);
}
