#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: an input integer
 * Return: 1 if n is greater than 0, 0 if n is 0, and -1 if n is less than 0
 */
int print_sign(int n)
{
	int plus = '+';
	int minus = '-';
	int sign = 0;
	int zero = '0';

	if (n > 0)
	{
		_putchar(plus);
		sign = 1;
	}
	else if (n == 0)
	{
		_putchar(zero);
		sign = 0;
	}
	else
	{
		_putchar(minus);
		sign = -1;
	}

	return (sign);
}
