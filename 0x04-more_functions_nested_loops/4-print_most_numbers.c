#include "main.h"
/**
 * print_most_numbers - Entry point, prints most numbers, not 2 and 4
 *
 * Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int zero = 48;

	while (zero <= 57)
	{
		if (zero == 50)
			zero = 51;
		if (zero == 52)
			zero = 53;
		_putchar(zero);
		zero++;
	}
	_putchar(10);
}
