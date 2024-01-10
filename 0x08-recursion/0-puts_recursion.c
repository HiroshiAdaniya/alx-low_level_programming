#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a pointer to a string / stdin (0)
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		i++;
		_puts_recursion(s + i);
	}
}
