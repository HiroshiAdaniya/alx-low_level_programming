#include "main.h"
#include <stdlib.h>
int length(char *);
/**
 * _strdup - copies a strings memory to a new string
 * @str: string / stdin (0)
 * Return: NULL if memory is insufficient or str is NULL, else a pointer
 */
char *_strdup(char *str)
{
	char *z;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = length(str);
	z = (char *)malloc(sizeof(char) * (i + 1));
	if (z == NULL)
		return (NULL);
	while (j < i)
	{
		z[j] = str[j];
		j++;
	}

	return (z);
}
/**
 * length - finds the length of a string
 * @s: a string / stdin (0)
 * Return: an int
 */
int length(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
