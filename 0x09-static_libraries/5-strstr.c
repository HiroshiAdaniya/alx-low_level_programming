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
	int k = 0;
	int l = 0;

	while (needle[l] != '\0')
		l++;

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0' && needle[j] == haystack[i])
		{
			j++;
			i++;
		}
		if (l == j)
		{
			l = 0;
			k = i - j;
			while (l <= j)
			{
				return (&haystack[k]);
				k++;
				l++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
