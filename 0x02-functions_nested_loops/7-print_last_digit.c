#include "main.h"
/**
 * print_last_digit - Entry point, prints the last digit of a number
 * @n: digit input
 * Return: value of the digit
 */
int print_last_digit(int n)
{
	int pos = 48;
	int print_last_digit = 48;

	if (n > pos)
	{
		print_last_digit = n % 10;
		_putchar('0' + print_last_digit);
	}
	else if (n < pos)
	{
		pos = n * -1;
		print_last_digit = pos % 10;
		_putchar('0' + print_last_digit);
	}
	else
	{
		print_last_digit = 48;
		_putchar('0' + print_last_digit);
	}

	return (print_last_digit);
}
