#include "main.h"
/**
 * _strlen - Entry point, calculates a string length
 * @s: string pointer, user input / stdin (0)
 * Return: length of string
 */
int _strlen(char *s)
{
	int j = 0;

	while (*s++ != '\0')
	{
		j++;
	}
	return (j);
}
