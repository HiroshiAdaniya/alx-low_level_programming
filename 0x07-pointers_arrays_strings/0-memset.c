#include "main.h"
/**
 * *_memset - Entry point, fills memory with a constant byte
 * @s: pointer being changed / stdin (0)
 * @b: constant byte / stdin (0)
 * @n: b bytes being changed / stdin (0)
 * Return: a pointer to the memory area s, filled with a constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
