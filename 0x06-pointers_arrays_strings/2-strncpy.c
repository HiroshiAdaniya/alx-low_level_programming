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
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
