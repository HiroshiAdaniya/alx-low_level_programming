#include "main.h"
int prime(int, int);
/**
 * is_prime_number - determines if a number is a prime number
 * @n: int / stdin (0)
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n > 5 && (n % 10 == 1 || n % 10 == 3 || n % 10 == 7 || n % 10 == 9))
		return (1);
	else
		return	(prime(n, 5));
}
/**
 * prime - filters multiples of 5 & 2 to find the non-prime number
 * @n: int / stdin (0)
 * @z: int / stdin (0)
 * Return: Always 0 (Success)
 */
int prime(int n, int z)
{
	int i = 0;

	if (n % 10 == 0 && n % 10 == z)
		return (0);
	else if (z >= 2)
		return (prime(n, z - 1));
	if (n % 2 == 0 && n != 2)
		i = 0;
	return (i);
}
