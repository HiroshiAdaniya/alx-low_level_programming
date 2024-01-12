#include "main.h"
#include <stdlib.h>
/**
 * main - prints all arguments received
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: Always 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			_putchar(argv[i][j]);
			if (argv[i][j] == 32)
			{
				j++;
				break;
			}
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
	exit(EXIT_SUCCESS);
}
