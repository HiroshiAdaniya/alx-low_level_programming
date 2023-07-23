#include "main.h"
/**
 * print_numbers - Entry point, prints numbers froom 0-9
 *
 * Return: Always 0 (success)
 */
void print_numbers(void)
{
	int zero = 48;

	while (zero <= 57)
	{
		_putchar(zero);
		zero++;
	}
	_putchar(10);
}
