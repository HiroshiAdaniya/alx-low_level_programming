#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive integers
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: result (Success), or 0 (no numbers passed) or 1 (error)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) >= 0)
			sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
