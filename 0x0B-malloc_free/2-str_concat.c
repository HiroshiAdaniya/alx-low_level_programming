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

	if (s1 == NULL)
		ss1 = 0;
	else
		ss1 = length(s1);
	if (s2 == NULL)
		ss2 = 0;
	else
		ss2 = length(s2);

	word = (char *)malloc(sizeof(char) * (ss1 + ss2 + 1));

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
	word[i + 1] = '\0';

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

	while (s[i] != '\0')
		i++;
	return (i);
}
