#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: pointer to a string
 * @n: integ
 * Return: an integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list l;

	va_start(l, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(l, int);
		printf("%d", num);
		if ((i < n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
