#include "main.h"
/**
 * puts_half - Entry point, prints the last half of a string
 * @str: User input / stdin (0)
 * Return: Second half of a string
 */
void puts_half(char *str)
{
	int k = 0;
	int j = 0;
	int i;

	while (str[k] != '\0')
	{
		k++;
	}
	if (k % 2 == 0)
		j = k / 2;
	else
		j = k-1 / 2;

	for (i = j; i < k; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
