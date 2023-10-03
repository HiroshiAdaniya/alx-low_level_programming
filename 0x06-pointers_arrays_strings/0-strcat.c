#include "main.h"
/**
 * *_strcat - Entry point, conatenates two strings
 * @dest: user input / stdin(0)
 * @src: user input / stdin (0)
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	k = i + j;
	j = 0;
	while (i <= k)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
