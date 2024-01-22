#include "main.h"
#include <stdlib.h>
/**
 * main - displays the name of the file it was compile from
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (__FILE__[i] != '\0')
	{
		_putchar(__FILE__[i]);
		i++;
	}
	_putchar('\n');
	exit(EXIT_SUCCESS);
}
