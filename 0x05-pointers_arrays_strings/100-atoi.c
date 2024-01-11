#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: user input string / stdin (0)
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	int neg, pos = 0;
	int sign = 1;
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			neg++;
		else if (s[i] == '+')
			pos++;
		if (s[i] - '0' <= 9 && s[i] - '0' >= 0)
		{
			num = num * 10 + s[i] - '0';
			if (s[i + 1] != '\0' && !(s[i + 1] - '0' <= 9 && s[i + 1] - '0' >= 0))
				break;
		}
		i++;
	}

	if ((neg % 2 == 0 && pos % 2 == 0) || (pos == 1 && neg == 0))
		sign = 1;
	else if ((neg % 2 == 1 && pos % 2 == 1) || (neg == 1 && pos == 0))
		sign = -1;
	else if (neg == 0 && pos == 0)
		sign  = 1;
	else
		sign = -1;
	return (sign * num);
}
