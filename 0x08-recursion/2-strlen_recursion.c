#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to a string / stdin (0)
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
		i = i + 1 + _strlen_recursion(s + 1);

	return (i);
}
