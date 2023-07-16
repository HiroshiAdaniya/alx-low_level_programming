#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int zero = 48;
	int nl = '\n';
	int comma = 44;
	int spc = 32;

	while (zero <=57)
	{
		putchar(zero);
		if (zero != 57)
		{
			putchar(comma);
			putchar(spc);
		}
		zero++;
	}
	putchar(nl);

	return (0);
}
