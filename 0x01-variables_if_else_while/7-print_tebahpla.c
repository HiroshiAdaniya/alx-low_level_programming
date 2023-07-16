#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 'z';
	int nl = '\n';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar(nl);

	return (0);
}
