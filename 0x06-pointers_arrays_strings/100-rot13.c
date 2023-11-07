#include "main.h"
/**
 * *rot13 - Entry point, encodes a string
 * *s: string / stdin (0)
 * Return: A string encoded with rot13
 */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char lows[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		while (caps[j] != '\0')
		{
			if (s[i] == caps[j])
				s[i] = lows[j];
			j++;
		}
		j = 0;
	}
	return (s);
}
