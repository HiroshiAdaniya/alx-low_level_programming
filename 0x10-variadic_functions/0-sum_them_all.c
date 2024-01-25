#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all it's arguments
 * @n: constant unsigned int
 * Return: sum of all values (int), else 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list a;

	if (n == 0)
		return (0);
	va_start(a, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(a, int);

	va_end(a);
	return (sum);
}
