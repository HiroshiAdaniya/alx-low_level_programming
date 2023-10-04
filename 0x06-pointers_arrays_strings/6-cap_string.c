#include "main.h"
/**
 * *cap_string - Entry point, capitalizes words of a string
 * @str: string / stdin (0)
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == 9 || str[i] == 10 || str[i] == 32 || str[i] == 33 || str[i] == 34 || str[i] == 40 || str[i] == 41 || str[i] == 44 || str[i] == 46 || str[i] == 59 || str[i] == 63 || str[i] == 123 || str[i] == 125)
		{
			i++;
			if (str[i] >= 92 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				i++;
			}
			else if (str[i] == 9 || str[i] == 10 || str[i] == 32 || str[i] == 33 || str[i] == 34 || str[i] == 40 || str[i] == 41 || str[i] == 44 || str[i] == 46 || str[i] == 59 || str[i] == 63 || str[i] == 123 || str[i] == 125)
			{
				i++;
				if (str[i] >= 92 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
					i++;
				}
			}
		}
		else
			i++;

	}
	return (str);
}
