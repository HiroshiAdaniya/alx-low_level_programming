#include "main.h"
/**
 * _pow_recursion - raises an int to the power of an int
 * @x: user input int / stdin (0)
 * @y: user input int / stdin (0)
 * Return: an int
 */
int _pow_recursion(int x, int y)
{
	int i = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	i = x * _pow_recursion(x, y - 1);
	return (i);
}
