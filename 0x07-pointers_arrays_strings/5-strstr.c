#include "main.h"
/**
 * *_strstr - locates a substring
 * @haystack: string / stdin (0)
 * @needle: substring / stdin (0)
 * Return: a substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && needle[j] == haystack[i])
		{
			return (&haystack[i]);
			i++;
		}
		j = 0;
		i++;
	}
	return (0);
}
