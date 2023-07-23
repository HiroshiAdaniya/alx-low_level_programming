#include "main.h"
/**
 * print_last_digit - Entry point, prints the last digit of a number
 * @n: digit input
 * Return: value of the digit
 */
int print_last_digit(int n)
{
	int print_last_digit = 0;

	if (n >= 0)
	{
		print_last_digit = n % 10;
		_putchar('0' + print_last_digit);
	}
	else if (n < 0)
	{
		print_last_digit = (n % -10) * -1;
		_putchar('0' + print_last_digit);
	}

	return (print_last_digit);
}
