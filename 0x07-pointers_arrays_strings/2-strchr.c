#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: sting / stdin (0)
 * @c: character being located
 * Return: first occurrence of character (successful) or NULL (unsuccessful)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return (0);
}
