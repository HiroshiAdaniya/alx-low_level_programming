#include "main.h"
/**
 * jack_bauer - Entry point, prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int first = 48;
	int second = 48;
	int delim = 58;
	int third = 48;
	int fourth = 48;
	int nl = '\n';

	for (first = 48; first <= 50; first++)
	{
		for (second = 48; second <= 51; second++)
		{
			for (third = 48; third <= 53; third++)
			{
				for (fourth = 48; fourth <= 57; fourth++)
				{
					_putchar(first);
					_putchar(second);
					_putchar(delim);
					_putchar(third);
					_putchar(fourth);
					_putchar(nl);
				}
			}
		}
	}
}
