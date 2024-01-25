#include "variadic_functions.h"
int length(const char * const);
/**
 * print_all - prints anything
 * @format: a constant pointer
 * Return: Nothing / void
 */
void print_all(const char * const format, ...)
{
	char *string;
	int on, i = 0;
	va_list list;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				on = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				on = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double));
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
		if (on == 1 && format[i + 1] != '\0')
			printf(", ");
		on = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
