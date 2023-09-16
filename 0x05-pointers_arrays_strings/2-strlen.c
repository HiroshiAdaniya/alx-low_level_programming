#include "main.h"
/**
 * _strlen - Entry point, calculates a string length
 * @str: user input / stdin (0)
 * Return - an integer
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
