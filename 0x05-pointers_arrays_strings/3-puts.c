#include "main.h"
/**
 * _puts - Entry point, prints a string with a newline
 * @str: user input / stdin (0)
 * Return: string
 */
void _puts(char *str)
{
	_putchar(*str);
	while (*str++ != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
					
}
