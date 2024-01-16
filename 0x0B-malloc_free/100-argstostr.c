#include "main.h"
#include <stdlib.h>
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

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len = len + ac;

	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
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
