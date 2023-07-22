#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point, prints all natural numbers until 98
 * @n: User input
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{

	while (n <= 98)
	{
		if (n == 98)
		{
			printf("98");
			break;
		}
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
		if (n == 98)
		{
			printf("98");
			break;
		}
	}
	printf("\n");
}
