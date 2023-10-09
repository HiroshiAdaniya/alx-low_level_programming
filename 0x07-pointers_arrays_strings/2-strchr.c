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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				return (&s[i]);
				i++;
			}
		}
	}
	return (0);
}
