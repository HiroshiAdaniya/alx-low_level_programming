#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 'a';
	int nl = '\n';
	int zero = 0;

	while (zero < 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		a = 'a';
		zero++;
		_putchar(nl);
	}
}
