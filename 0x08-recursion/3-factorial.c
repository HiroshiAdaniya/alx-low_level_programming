#include "main.h"
/**
 * factorial - returns factorial of given number
 * @n: user input int / stdin (0)
 * Return: factorial of an int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
