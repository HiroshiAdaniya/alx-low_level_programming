#include "main.h"
/**
 * print_times_table - Entry point
 * @n: user standard input
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int i, j, k = 0;

	if (n > 15 || n < 0)
	{
		return;
	}
	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				_putchar(44);
				_putchar(32);

				if (k < 10)
				{
					_putchar(32);
					_putchar(32);
					_putchar(k + 48);
				}
				else if (k >= 10 && k <= 99)
				{
					_putchar(32);
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar((k / 100) + 48);
					_putchar((k / 10 % 10) + 48);
					_putchar((k % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
