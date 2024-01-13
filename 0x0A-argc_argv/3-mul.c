#include "main.h"
#include <stdlib.h>
void Error(void);
void print(int);
/**
 * main -  multiplies two numbers
 * @argc: argument counter
 * @argv: argument vector
 * Return: result of multiplying two numbers, else 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int num1 = 0;
	int num2 = 0;
	int result = 0;
	int sign = 0;

	if (argc < 3 || argc > 3)
	{
		Error();
		return (1);
	}

	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-')
			{
				sign = 1;
				j++;
			}
			if (i == 1)
				num1 = num1 * 10 + argv[i][j] - '0';
			else if (i == 2)
				num2 = num2 * 10 + argv[i][j] - '0';
			if (argv[i][j] == 32)
			{
				j++;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	result = num1 * num2;
	if (sign == 1)
		_putchar('-');
	print(result);
	_putchar('\n');

	exit(EXIT_SUCCESS);
}
/**
 * Error - Prints "error" if there are less than 2 commands
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
 * print - converts the result into a printable character (recursive function)
 * @result: int
 * Return: Always 0 (Success)
 */
void print(int result)
{
	int j = 48;

	if (result < 10)
		_putchar(j + result);
	else if (result > 10)
	{
		j = j + result % 10;
		print(result / 10);
		_putchar(j);
	}
}
