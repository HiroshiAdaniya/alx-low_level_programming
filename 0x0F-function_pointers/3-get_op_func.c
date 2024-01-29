#include "3-calc.h"
/**
 * get_op_func - selects a function and performs an operation
 * @s: pointer to a char
 * Return: result / an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != s)
	{
		if (*ops[i] == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
