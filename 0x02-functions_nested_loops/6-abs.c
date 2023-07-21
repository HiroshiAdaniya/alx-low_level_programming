#include "main.h"
/**
 * _abs - Entry point, computes the absolute value of an integer
 * @n: an input integer
 * Return: Always 0 (success)
 */
int _abs(int n)
{
	int pos = 1;
	int neg = -1;

	if (n < 0)
	{
		pos = n;
	}
	else if (n >= 0)
	{

		neg = n;
	}

	return (pos * neg);
}
