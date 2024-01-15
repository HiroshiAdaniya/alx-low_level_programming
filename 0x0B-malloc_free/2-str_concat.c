#include "main.h"
#include <stdlib.h>
int length(char *);
/**
 * str_concat - joins two strings together
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failed, else a pointer to a string
 */
char *str_concat(char *s1, char *s2)
{
	int ss1, ss2 = 0;
	int i, j = 0;
	char *word;

	ss1 = length(s1);
	ss2 = length(s2);

	i = ss1 + ss2 + 1;
	word = (char *)malloc(sizeof(char) * i);
	i = 0;

	if (word == NULL)
		return (NULL);

	while (i < ss1)
	{
		word[i] = s1[i];
		i++;
	}
	while (j < ss2)
	{
		word[i] = s2[j];
		j++;
		i++;
	}
	word[i] = '\0';

	return (word);
}
/**
 * length - finds the length of a string
 * @s: string
 * Return: an int
 */
int length(char *s)
{
	int i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
