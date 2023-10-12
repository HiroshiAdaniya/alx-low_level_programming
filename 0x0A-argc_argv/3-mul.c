#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Multiplies two numbers
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;
	printf("%d\n", sum);

	return (0);
}
