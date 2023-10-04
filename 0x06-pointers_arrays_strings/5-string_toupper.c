#include "main.h"
/**
 * *string_toupper - entry point, changes a lowercase to uppercase
 * @str: a string / stdin (0)
 * Return: string of upppercase
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 60 && str[i] <= 90)
		{
			i++;
		}
		else if (str[i] >= 97 && str[i <= 122])
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
