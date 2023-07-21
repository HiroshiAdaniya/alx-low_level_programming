#include "main.h"
/**
 * _isalpha - Entry point, checks for letters upper or lowercase
 *@c: An input character
 *Return: If c is a letter return 1, otherwise return 0
 */
int _isalpha(int c)
{
	int a = 'a';
	int A = 'A';
	int _isalpha = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			_isalpha = 1;
			break;
		}
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		if (c == A)
		{
			_isalpha = 1;
			break;
		}
	}

	return (_isalpha);
}
