#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 48;
	int second = 49;
	int comma = 44;
	int nb = 1;
	int spc = 32;
	int nl = '\n';

	while (first <= 57 && nb <= 9)
	{
		while (second <= 57)
		{
			putchar(first);
			putchar(second);
			if (first != 56)
			{
				putchar(comma);
				putchar(spc);
			}
			second++;
		}
		first++;
		second = 49 + (nb++);
		
	}
	putchar(nl);

	return (0);
}
