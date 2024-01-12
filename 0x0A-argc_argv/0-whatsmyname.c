#include "main.h"
#include <stdlib.h>
/**
 * main - Printd the name of a program
 * @argc: argument counter / stdin(0)
 * @argv: argument vector / stdin (0)
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
