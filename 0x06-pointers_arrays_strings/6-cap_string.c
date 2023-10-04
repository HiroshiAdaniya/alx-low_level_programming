#include "main.h"
/**
 * *cap_string - Entry point, capitalizes words of a string
 * @str: string / stdin (0)
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		while (str[i] != sep[j] && sep[j] != '\0')
			j++;
		if (str[i] == sep[j])
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
		}
		else if (str[i] != sep[j] && str[i] >= 97 && str[i] <= 122)
			i++;
		else
			i++;
		j = 0;
	}
	return (str);
}
