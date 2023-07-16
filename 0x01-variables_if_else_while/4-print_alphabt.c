#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a';
	int nl = '\n';

	while (a <= 'z')
	{
		putchar(a);
		a++;
		if (a == 'e')
			a = 'f';
		else if (a == 'q')
			a = 'r';
	}
	putchar(nl);

	return (0);
}
