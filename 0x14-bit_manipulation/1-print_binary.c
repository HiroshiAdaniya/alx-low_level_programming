#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 * Return: void / nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0;

	if (n == 0)
		_putchar(48);
	while (powers(2, i) <= n)
		i++;
	while (i)
	{
		i--;
		if (n < powers(2, i))
			_putchar(48);
		else if (n > powers(2, i) || n == powers(2, i))
		{
			_putchar(49);
			n = n - powers(2, i);
		}
		if (i == 0)
			break;
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
