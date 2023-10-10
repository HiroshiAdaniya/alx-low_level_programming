#include "main.h"
int facto(int, int);
/**
 * is_prime_number - finds prime numbers
 * @n: user input int / stdin (0)
 * Return: 1 if int is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (facto(n, n - 1));
}
/**
 * facto - determining if an int has more than 2 factors
 * @n: user input int / stdin (0)
 * @j: used to iterate through the ints
 * Return: 1 or 0;
 */
int facto(int n, int j)
{
	if (j == 1)
		return (1);
	else if (n % j == 0 && j > 0)
		return (0);
	return (facto(n, j - 1));
}
