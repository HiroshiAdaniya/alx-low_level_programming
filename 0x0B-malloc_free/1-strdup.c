#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns pointer to memory, which is a copy of given string
 * @str: string / stdin (0)
 * Return: NULL if str is NULL or insufficient memory, else a string
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	i++;
	s = malloc(sizeof(char) * i);

	for (; j < i; j++)
	{
		s[j] = str[j];
	}
	if (s > str)
		return (NULL);
	return (s);

}
