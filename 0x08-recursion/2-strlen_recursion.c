#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: user input string / stdin (0)
 * Return: Length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
