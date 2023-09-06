#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			putchar(70);
			putchar(105);
			putchar(122);
			putchar(122);
			putchar(66);
			putchar(117);
			putchar(122);
			putchar(122);
			putchar(32);
		}
		else if (i % 3 == 0)
		{
			putchar(70);
			putchar(105);
			putchar(122);
			putchar(122);
			putchar(32);
		}
		else if (i % 5 == 0)
		{
			putchar(66);
			putchar(117);
			putchar(122);
			putchar(122);
			putchar(32);

		}
		else
		{
			printf("%d ", i);
		}
	}
	return (0);
}
