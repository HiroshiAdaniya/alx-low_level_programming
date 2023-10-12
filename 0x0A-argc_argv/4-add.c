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
	int num = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum = sum + num;
		}
		if ((num == 0))
		{
			printf("Error\n");
			return (1);
		}

	}
	printf("%d\n", sum);

	return (0);
}
