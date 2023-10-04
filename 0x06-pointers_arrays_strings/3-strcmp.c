#include "main.h"
/**
 * _strcmp - Entry point, compares two strings
 * @s1: user input / stdin (0)
 * @s2: user input / stdin (0)
 * Return: either 0 if they are the same, or a positive or negative integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int result = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	if (i > j)
		k = i;
	else if (j > i)
		k = j;
	else
		k = i;
	i = 0;
	while (i < k)
	{
		if (s1[i] > s2[i])
		{
			result = 15;
			break;
		}
		else if (s1[i] < s2[i])
		{
			result = -15;
			break;
		}
		else if (s1[i] == s2[i])
		{
			i++;
		}
	}
	if (s1[i] == s2[i])
		result = 0;
	return (result);
}
