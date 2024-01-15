#include "main.h"
#include <stdlib.h>
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

	len = length(ac, av);

	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			if (av[i][j] == 32)
			{
				j++;
				break;
			}
			string[l] = av[i][j];
			j++;
			l++;
		}
		string[l] = '\n';
		l++;
		j = 0;
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
	int i, j, len = 0;

	for (i = 0; i < ac; i++)
	{
		while (av[i][j] != '\0')
		{
			if (av[i][j] == 32)
			{
				j++;
				len++;
				break;
			}
			j++;
			len++;
		}
		j = 0;
	}
	return (len);
}
