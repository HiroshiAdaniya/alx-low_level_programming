#include "main.h"
#include <stdlib.h>
#include <stdio.h>
void Error(void);
void change(int);
void print(int);
/**
 * main - prints the minimum amount of change for an amount of money
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int number = 0;

	if (argc < 2 || argc > 2)
	{
		Error();
		exit(1);
	}
	if (argv[1][0] == 48)
	{
		_putchar(48);
		_putchar('\n');
		exit(0);
	}
	while (i < 2)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-')
			{
				_putchar(48);
				_putchar('\n');
				exit(0);
			}
			number = number * 10 + argv[i][j] - '0';
			j++;
		}
		i++;
	}
	change(number);

	exit(EXIT_SUCCESS);
}
/**
 * Error - Prints error if argument is not exactly 1
 *
 * Return: Always 0 (SUCCESS)
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
 * change -  calculates the amount of change
 * @c: an int
 * Return: Always 0 (Success)
 */
void change(int c)
{
	int quarters = 0;
	int tens = 0;
	int fives = 0;
	int twos = 0;
	int ones = 0;
	int coins = 0;

	quarters = c / 25;
	c = c - quarters * 25;
	tens = c / 10;
	c = c - tens * 10;
	fives = c / 5;
	c = c - fives * 5;
	twos = c / 2;
	c = c - twos * 2;
	ones = c / 1;
	c = c - ones * 1;

	coins = quarters + tens + fives + twos + ones;

	print(coins);
	_putchar('\n');
}
/**
 * print - prints the amount of change (recursive function)
 * @a: int / stdin (0)
 * Return: Always 0 (Success)
 */
void print(int a)
{
	int num = 48;
	int i = 48;

	if (a < 10)
	{
		_putchar(i + a);
	}
	if (a > 10)
	{
		num = num + a % 10;
		print(a / 10);
		_putchar(num);
	}
}
