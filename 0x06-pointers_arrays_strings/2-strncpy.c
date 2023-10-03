#include "main.h"
/**
 * *_strncpy - Entry point, copies a string
 * @dest: user input / stdin (0)
 * @src: user input / stdin (0)
 * @n: user input / stdin (0)
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != src[n])
		j++;
	while (k < i)
	{
		while (k < j)
		{
			dest[k] = src[k];
			k++;
		}
		k++;
	}
	return (dest);
}
