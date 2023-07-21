#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Succcess)
 */
void print_alphabet(void)
{
	int a = 'a';
	int nl = '\n';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar(nl);
}
