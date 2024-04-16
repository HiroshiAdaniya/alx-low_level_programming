#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 * Return: void / nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j = 0;
	char on = 48;

	i = powers(2, sizeof(unsigned long int) * 8 - 1);
	while (i)
	{
		j = n & i;
		if (j == i){
			on = 49;
			_putchar(49);
		}
		else if (on == 49 || i == 49)
			_putchar(48);
		i >>= 1;
	}
}
/**
 * powers - Finds the power of 2
 * @base: The base value
 * @pow: The power to raise the base by
 * Return: an int
 */
unsigned long int powers(unsigned long int base, unsigned long int pow)
{
	unsigned long int sum = 1;

	while (pow > 0)
	{
		sum = sum * base;
		pow--;
	}

	return (sum);
}
