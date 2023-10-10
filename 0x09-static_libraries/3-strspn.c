#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string being evaluated / stdin (0)
 * @accept: string used to check / stdin (0)
 * Return: number of bytes that appear
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int l = 0;

	while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
	{
		for (; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				l++;
		}
		j = 0;
		i++;
	}

	return (l);
}
