#include "main.h"
/**
 * factorial - finds the factorial of a number
 * @n: an int / sdtin (0)
 * Return: Factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	n = n * factorial(n - 1);

	return (n);
}
