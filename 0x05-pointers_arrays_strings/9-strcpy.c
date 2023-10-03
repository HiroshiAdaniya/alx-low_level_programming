#include "main.h"
/**
 * *_strcpy - Entry point, copies string to buffer
 * @src: user input string / stdin (0)
 * Return: copies string to *dest and returns pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
		i++;

	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
