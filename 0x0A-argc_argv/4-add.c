#include "main.h"
#include <stdlib.h>
void Error(void);
void PrintResult(int);
/**
 * main - adds positive numbers together
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 if 0 arguments passed, 1 if it's a non-digit, else result
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int num, sum = 0;

	/* Evaluates conditions  to progress in the program*/
	if (argc == 1 || argc < 3)
	{
		_putchar(48);
		_putchar('\n');
		exit(0);
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			/* If a non-digit is present, exits program */
			if (!(argv[i][j] >= 48 && argv[i][j] <= 57) && argv[i][j] != 32)
			{
				Error();
				exit(1);
			}
			/* convert a string to an int*/
			num = num * 10 + argv[i][j] - '0';
			j++;
			if (argv[i][j] == 32)
			{
				j++;
				break;
			}
		}
		sum = sum + num;
		j = 0;
		num = 0;
		i++;
	}
	/* Function that prints the result from an int to a string*/
	PrintResult(sum);
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
/**
 * Error - Prints error if non-digit is present
 *
 * Return: Always 0 (Success)
 */
void Error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
/**
 * PrintResult - Prints the result (recursive function)
 * @r: an int
 * Return: Always 0 (Success)
 */
void PrintResult(int r)
{
	int j = 48;
	int i = 48;

	if (r < 10)
		_putchar(j + r);
	if (r > 10)
	{
		i = i + r % 10;
		PrintResult(r / 10);
		_putchar(i);
	}
}
