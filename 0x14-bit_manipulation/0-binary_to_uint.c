#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: a pointer to a constant char
 * Return: an int (answer), else 0 (unsuccessful)
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, num, j = 0;
	unsigned int count = 0;

	if (b == NULL)
		return (0);
	len = length(b);
	i = len;

	for (j = 0; len >= 0; len--, j++)
	{
		num = b[len] - '0';
		if (num != 0 && num != 1)
			return (0);
		if (i == len)
			count = count + (num * 1);
		else
			count = count + (num * power(2, j));
	}
	return (count);
}
/**
 * power - calculates the power of a number
 * @a: int
 * @b: int
 * Return: an integer
 */
int power(int a, int b)
{
	int sum = 1;

	while (b != 0)
	{
		sum = sum * a;
		b--;
	}

	return (sum);
}
/**
 * length - finds the length of a string
 * @s: pointer to a const string
 * Return: length of a string
 */
int length(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;

	return (i);
}
