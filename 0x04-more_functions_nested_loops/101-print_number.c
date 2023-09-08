#include "main.h"
/**
 * print_number - prints an integer
 * @n: user input / stdin (0)
 * Return: prints an integer
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}

	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}
