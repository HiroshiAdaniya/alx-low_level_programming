#include "3-calc.h"
/**
 * main - entry point
 * @argc: int
 * @argv: pointer to an array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (*operator != 43 && *operator != 42 && *operator != 45 &&
	*operator != 47 && *operator != 37)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}

