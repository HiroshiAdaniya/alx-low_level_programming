~/alx/alx-low_level_programming/0x0C-more_malloc_free#include "main.h"
#include <stdlib.h>
unsigned int length(char *);
/**
 * string_nconcat - concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 * @n: unsigned int
 * Return: a pointer, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	unsigned int k, l = 0;
	char *string;

	i = length(s1);
	j = length(s2);
	if (n >= j)
		l = i + j + 1;
	else
		l = i + n + 1;

	string = (char *)malloc(sizeof(char) * l);
	if (string == NULL)
	{
		free(string);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		string[k] = s1[k];

	if (n >= j)
	{
		for (i = 0; i < j; i++, k++)
			string[k] = s2[i];
	}
	else
	{
		for (i = 0; i < n; i++, k++)
			string[k] = s2[i];
	}
	string[k] = '\0';
	return (string);
}
/**
 * length - finds the length of a string
 * @a: pointer to a string
 * Return: int
 */
unsigned int length(char *a)
{
	unsigned int i = 0;

	if (a == NULL)
		return (0);
	while (a[i] != '\0')
		i++;
	return (i);
}
