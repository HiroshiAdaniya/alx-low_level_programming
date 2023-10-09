#include "main.h"
/**
 * _print_rev_string - prints a string in reverse
 * @s: user input string / stdin (0)
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}
