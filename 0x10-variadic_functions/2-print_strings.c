#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: pointer to strings
 * @n: an int
 * Return: Nothing / void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;
	va_list  z;

	if (n == 0)
		exit(0);
	va_start(z, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(z, char *);
		if (*string == '\0')
			printf("(nil)");
		printf("%s", string);
		if (separator == NULL)
			continue;
		if ((i < n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(z);
}
