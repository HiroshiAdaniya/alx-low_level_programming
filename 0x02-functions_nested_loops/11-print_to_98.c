#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point, prints all natural numbers until 98
 * @n: User input
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
		if (n == 97)
		{
			printf("98");
			break;
		}
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
		if (n == 97)
		{
			printf("98");
			break;
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
