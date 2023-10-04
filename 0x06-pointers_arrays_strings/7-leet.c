#include "main.h"
/**
 * *leet - Entry point, encodes a string
 * @s: string / stdin (0)
 * Return: An encoded string using 1337(leet)
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char cap[] = "aeotlAEOTL";
	char num[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		while (cap[j] != '\0' && num[j] != '\0')
		{
			if (s[i] == cap[j])
			{
				s[i] = num[j];
			}
			j++;
		}
		j = 0;
	}
	return (s);
}
