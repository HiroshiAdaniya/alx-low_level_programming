#include "main.h"
/**
 * *_strbrk - searches a string for any of set of bytes
 * @s: string / stdin (0)
 * @accept: string / stdin (0)
 * Return: pointer to the byte that matches one of the bytes or NULL (unsuccessful)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
