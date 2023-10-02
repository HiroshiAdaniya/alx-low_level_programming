#include "main.h"
/**
 * puts2 - Entry point, prints every 2nd char of a string
 * @str: user input, stdin (0)
 * Return: Every second charcter
 */
void puts2(char *str)
{
	int k = 0;
	int i;

	while (str[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
