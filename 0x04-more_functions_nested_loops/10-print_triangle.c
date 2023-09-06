#include "main.h"
/**
 * print_triangle - entry point
 * @size: user input / stdin (0)
 * Return: pound symbol / newline
 */
void print_triangle(int size)
{
	int i, k, s, t;
	int j = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		s = size;
		t = size;
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < s; j++)
			{
				_putchar(32);
			}
			for (k = t; k >= s; k--)
				_putchar(35);
			_putchar('\n');
			s--;
		}
	}
}
