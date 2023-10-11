#include "main.h"
#include <stdio.h>
/**
 * main - Prints a programs name
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
