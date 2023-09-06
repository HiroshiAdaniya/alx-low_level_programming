#include "main.h"
/**
 * print_line - Entry point, draws straight line in terminal
 * @n: user input
 * Return: either a line or newline
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar(10);
	}
}
