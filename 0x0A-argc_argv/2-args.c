#include "main.h"
#include <stdio.h>
/**
 * main -  prints all arguments it receives
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
