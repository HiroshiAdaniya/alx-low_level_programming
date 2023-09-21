#include "main.h"
/**
 * puts2 - Entry point, prints every 2nd char of a string
 * @str: user input, stdin (0)
 * Return: Every second charcter
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
