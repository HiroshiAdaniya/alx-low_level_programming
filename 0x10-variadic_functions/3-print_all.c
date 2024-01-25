#include "variadic_functions.h"
int length(const char * const);
/**
 * print_all - prints anything
 * @format: a constant pointer
 * Return: Nothing / void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string;
	int in, len, on;
	double fl;
	char ch;
	va_list list;

	va_start(list, format);
	len = length(format);

	while (i < len)
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(list, int);
				printf("%c", ch);
				on = 1;
				break;
			case 'i':
				in = va_arg(list, int);
				printf("%d", in);
				on = 1;
				break;
			case 'f':
				fl = va_arg(list, double);
				printf("%f", fl);
				on = 1;
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
					string = "(nil)";
				on = 1;
				printf("%s", string);
		}
		if (on && (i < len - 1))
			printf(", ");
		on = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 * length - finds the length of a string
 * @s: pointer to a const string
 * Return: integer
 */
int length(const char * const s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
