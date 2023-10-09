#include "main.h"
int sqrts(int, int, int);
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: user input int / stdin (0)
 * Return: square root of an int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);

	return (sqrts(n, 1, n));
}
/**
 * sqrts - Finds the square root
 * @n: user input int / stdin (0)
 * @s: beginning point
 * @e: the end point
 * Return: -1 if there is no natural number, else square root of n
 */
int sqrts(int n, int s, int e)
{
	int i;

	if (s > e)
		return (-1);
	i = (s + e) / 2;

	if (i * i == n)
		return (i);
	else if (i * i < n)
	{
		if ((i + 1) * (i + 1) > n)
			return (-1);
		return (i = (sqrts(n, i + 1, e)));
	}
	return (i = (sqrts(n, s, i - 1)));
}
