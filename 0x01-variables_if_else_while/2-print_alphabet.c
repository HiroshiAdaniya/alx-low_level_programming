#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 'a';
	int n = '\n';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar(n);

	return (0);
}
