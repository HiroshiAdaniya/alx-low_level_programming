#include "main.h"
int sqrts(int, int);
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: user input int / stdin (0)
 * Return: square root of an int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrts(n, 0));
}
/**
 * sqrts - Finds the square root
 * @n: user input int / stdin (0)
 * @s: starting point
 * Return: -1 if there is no natural number, else square root of n
 */
int sqrts(int n, int s)
{
	if (s * s == n)
		return (s);
	else if (s * s > n)
		return (-1);
	return (s = sqrts(n, s + 1));
}
