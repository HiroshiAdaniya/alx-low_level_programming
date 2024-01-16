#include "main.h"
#include <stdlib.h>
int length(int __attribute__((unused)), char **);
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

	string = malloc(sizeof(char *) * len);
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
	int len, i, j = 0;

	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			len++;
			j++;
			if (av[i][j] == 32)
				break;
		}
		len++;
		i++;
		j = 0;
	}
	return (len);
}
