#include "main.h"
#include <stdlib.h>
/**
 * main - prints the number of arguments passed to it
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int z = 48;
	int i = 1;

	if (argc == 1)
	{
		_putchar(48);
		_putchar('\n');
		exit(EXIT_SUCCESS);
	}
	else
	{
		while (i < argc)
		{
			i++;
			z++;
		}
	}
	_putchar(z);
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
