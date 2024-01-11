#include "main.h"
int length(char *);
int palindrome(char *, int, int);
/**
 * is_palindrome - determines if a string is a palindrome
 * @s: pointer to a string / stdin (0)
 * Return: 1 if a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int i = 0;

	if (*s == 0)
		return (0);
	i = length(s);
	i = palindrome(s, 0, i);
	
	return (i);
}
/**
 * length - finds the lenght a string
 * @z: pointer to a string / stdin (0)
 * Return: Length of a string
 */
int length(char *z)
{

	if (*z == '\0')
		return (0);
	return (1 + length(z + 1));
}
/**
 * palindrome - finds if a word is a palindrome
 * @t: pointer to a string / stdin (0)
 * @i: an int
 * @j: integer holds the length of a string
 * Return: 1 if palindrome, else 0
 */
int palindrome(char *t, int i, int j)
{

	if (*(t + i) != *(t + j - 1))
		return (0);
	if (i >= j)
		return (1);
	return (palindrome(t, i + 1, j - 1));
}
