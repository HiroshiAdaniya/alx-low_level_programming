#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: pointer to a string of char
 * @f: a function pointer
 * Return: Always 0 (Success)
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
