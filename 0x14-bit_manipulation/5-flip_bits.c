#include "main.h"
/**
 * flip_bits - Determines the number of bits that need to change
 * to get from one given value to another
 * @n: unsigned long int / the value
 * @m: unsigned long int / the value to match
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 1;
	unsigned int tally = 0;
	unsigned long int bits = 0;

	bits = n ^ m;

	while (count)
	{
		if (bits & count)
			tally++;
		count = count << 1;
	}

	return (tally);
}
