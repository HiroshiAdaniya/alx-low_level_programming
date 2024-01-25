#include "variadic_functions.h"
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

	while (format[len] != '\0')
		len++;

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
		}
		if (on && (i < len - 1))
			printf(", ");
		on = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
