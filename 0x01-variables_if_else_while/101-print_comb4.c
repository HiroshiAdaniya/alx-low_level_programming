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
	int third = 50;
	int nb = 1;
	int nb1 = 1;
	int nl = '\n';
	int comma = 44;
	int spc = 32;

	while (first <= 55)
	{
		while (second <= 56)
		{
			while (third <= 57)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first != 55)
				{
					putchar(comma);
					putchar(spc);
				}
				third++;
			}
			second++;
			third = 50 + (nb++);
		}
		first++;
		second = 49 + (nb1++);
	}
	putchar(nl);

	return (0);
}
