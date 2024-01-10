#include "main.h"
/**
 * _pow_recursion - calculates the power of a number
 * @x: int / stdin (0)
 * @y: int / stdin (0)
 * Return: An integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	x = x * _pow_recursion(x, y - 1);

	return (x);
}
