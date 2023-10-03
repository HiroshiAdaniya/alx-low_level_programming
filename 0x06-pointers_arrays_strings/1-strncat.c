#include "main.h"
/**
 * *_strncat -  Entry point, concatenates two strings
 * @dest: user input / stdin(0) / string
 * @src: user input / stdin(0) /string
 * @n: user input / stdin(0) / integer
 * Return: result of string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
		i++;
	k = i + n;
	while (i < k)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
