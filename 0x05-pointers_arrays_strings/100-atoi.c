#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: user input string / stdin (0)
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;
		while (s[i] - '0' <= 9 && s[i] - '0' >= 0)
		{
			j = 1;
			num = num * 10 + s[i] - '0';
			i++;
		}
		if (j == 1)
			break;
		i++;
	}

	return (sign * num);
}
