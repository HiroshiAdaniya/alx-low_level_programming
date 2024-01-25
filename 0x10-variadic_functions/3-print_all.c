#include "variadic_functions.h"
int length(const char * const);
/**
 * print_all - prints anything
 * @format: a constant pointer
 * Return: Nothing / void
 */
void print_all(const char * const format, ...)
{
	char *string, ch;
	int in, len, on, i = 0;
	double fl;
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
				printf("%s", string);
				on = 1;
				break;
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
 * length - determines the length of a string
 * @s: const pointer to a string
 * Return: int
 */
int length(const char * const s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
