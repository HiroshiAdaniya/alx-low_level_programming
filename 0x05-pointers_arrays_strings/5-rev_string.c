#include "main.h"
/**
 * rev_string - Entry point, reverses a string
 * @s: user input / stdin (0);
 * Return: reversed string
 */
void rev_string(char *s)
{
	char j = s[0];
	int k = 0;
	int i;

	while (s[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i++)
	{
		k--;
		j = s[i];
		s[i] = s[k];
		s[k] = j;
	}
}
