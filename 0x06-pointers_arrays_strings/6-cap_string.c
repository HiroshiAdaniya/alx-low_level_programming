#include "main.h"
/**
 * *cap_string - Entry point, capitalizes words of a string
 * @str: string / stdin (0)
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
				&& !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				&& !(str[i - 1] >= '0' && str[i - 1] <= '9')
				&& str[i - 1] != '-')
			str[i] -= 32;
	}
	return (str)
}
