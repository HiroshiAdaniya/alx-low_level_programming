#include "main.h"
#include <stdio.h>
int binary(unsigned long int n);
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Unsigned long int / the number that holds the value
 * @index: unsigned int / the index
 * Return: The bit (int), else -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 1;

	bit = bit << index;
	if (bit == '\0')
		return (-1);
	if (n & bit)
		bit = 1;
	else
		bit = 0;
	return (bit);
}
