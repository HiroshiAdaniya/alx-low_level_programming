#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int length(int, char **);
/**
 * argstostr - concatenates all argument of a program
 * @ac: int / argument counter
 * @av: char pointer / argument vector
 * Return: a pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i, l, j, len = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 1 + length(ac, av);

	string = malloc(sizeof(char) * len);
	if (string == NULL)
		return (NULL);

	for  (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			string[l] = av[i][j];
			l++;
		}
		if (string[l] == '\0')
			string[l++] = '\n';
	}
	return (string);
}
/**
 * length - finds the length of a string / 2d string array
 * @ac: int / argument counter
 * @av: argument vector
 * Return: in
 */
int length(int ac, char **av)
{
	int len, i, j = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	return (len + ac);
}
