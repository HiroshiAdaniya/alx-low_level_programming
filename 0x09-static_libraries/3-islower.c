#include "main.h"
/**
 * _islower - Entry point
 * @c: an input character
 * Return: If c is lowercase, return 1. Otherwise, 0 is returned
 */
int _islower(int c)
{
	int a = 'a';
	int _islower = 0;

	for (a = a; a <= 'z'; a++)
	{
		if (c == a)
		{
			_islower = 1;
			break;
		}
	}

	return (_islower);
}
