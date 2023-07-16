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

	while (zero <= 57)
	{
		putchar(zero);
		zero++;
	}
	putchar(nl);

	return (0);
}
