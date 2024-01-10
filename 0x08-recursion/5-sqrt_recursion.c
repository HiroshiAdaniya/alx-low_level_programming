#include "main.h"
/**
 * _sqrt_recursion - finds the natrual square root of a number
 * @n: integer / stdin (0)
 * Return: square root of a number
 */
int root(int, int);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (root(n, 0));
}
/**
 * root - helps finds the root of the number
 * @n: int / stdin (0)
 * @a: int / stdin (0);
 * Return: the root of a number
 */
int root(int n, int a)
{
	if (a * a == n)
		return (a);
	else if (a == n)
		return (-1);
	return (root(n, a + 1));
}
