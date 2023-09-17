#include "main.h"
/**
 * print_rev - Entry point, prints string in reverse
 * @s: user input / stdin (0)
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int j, i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (j = 0; j <= i; j++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
