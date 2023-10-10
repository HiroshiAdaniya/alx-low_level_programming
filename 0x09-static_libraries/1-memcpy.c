#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area being changed / stdin(0)
 * @src: source memory / stdin  (0)
 * @n: n bytes being changed
 * Return: dest with n bytes have been changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
