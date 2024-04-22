#include "3-calc.h"
#include <string.h>
/**
 * main - Performs simple operation
 * @argc: int / argument counter
 * @argv: pointer to an array of char / argument vector
 * Return: An int / result
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc = 0;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];

	if (strlen(argv[2]) > 1 || (*operator != '+' &&
	*operator != '-' && *operator != '*' &&
	*operator != '/' && *operator != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	num2 = atoi(argv[3]);

	calc = (*get_op_func(operator))(num1, num2);
	printf("%d\n", calc);

	return (0);
}
