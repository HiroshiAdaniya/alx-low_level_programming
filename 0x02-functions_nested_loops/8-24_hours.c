#include "main.h"
/**
 * jack_bauer - Entry point, prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int hour = '0';
	int minute = '0';

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(58);
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar(10);
		}
	}
}
