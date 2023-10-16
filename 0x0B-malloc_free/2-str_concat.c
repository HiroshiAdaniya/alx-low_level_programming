#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string pointer / stdin (0)
 * @s2: string pointer / stdin (0)
 * Return: pointer to the new string, NULL if failed or if null is passed
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, l;
	char *p;

	k = 0;
	i = 0;
	j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	l = 0;
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (; k < (i + j); k++, l++)
		p[k] = s2[l];
	return (p);

}
