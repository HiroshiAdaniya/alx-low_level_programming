#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: a pointer to a unsigned long int / the value
 * @index: Unsigned int / the index
 * Return: 1 on success, else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int limit = (sizeof(unsigned long int) * 8 - 1);
	unsigned long int oldn = 0;
	int bit = 1;

	if (index > limit)
		return (-1);

	bit = bit << index;
	if (*n & bit)
	{
		oldn = *n;
		*n = *n - bit;
		if (*n != oldn)
			bit = 1;
		else
			bit = -1;
	}
	else
		bit = 1;

	return (bit);
}
