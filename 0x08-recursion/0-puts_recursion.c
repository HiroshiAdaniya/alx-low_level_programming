#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a pointer to a string / stdin (0)
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
