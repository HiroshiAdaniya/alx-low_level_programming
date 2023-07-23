#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i, k = 0;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k >= 10)
			{
				_putchar('0' + k / 10);
			}
			_putchar('0' + k % 10);
		}
		_putchar(10);
	}
}
