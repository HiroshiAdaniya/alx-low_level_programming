#include "main.h"
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
	unsigned int i, j, k, l = 0;
	char *string;

	i = length(s1);
	j = length(s2);
	l = i + j;

	string = malloc(sizeof(unsigned int) * l + 1);
	if (string == NULL)
		return (NULL);

	while (k < i)
	{
		string[k] = s1[k];
		k++;
	}
	i = 0;
	if (n >= j)
	{
		while (i < j)
		{
			string[k] = s2[i];
			k++;
			i++;
		}
		string[k++] = '\0';
	}
	else
	{
		while (i < n)
		{
			string[k] = s2[i];
			k++;
			i++;
		}
		string[k++] = '\0';
	}
	return (string);
}
/**
 * length - finds the length of a string
 * @a: pointer to a string
 * Return: int
 */
unsigned int length(char *a)
{
	int i = 0;

	if (a == NULL)
		return (i);
	while (a[i] != '\0')
		i++;
	return (i);
}
