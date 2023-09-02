#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			k = i * j;
			_putchar(44);
			_putchar(32);

			if (k < 10)
			{
				_putchar(32);
				_putchar(k + 48);
			}
			else
			{
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
