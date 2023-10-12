#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: argument counter / stdin (0)
 * @argv: argument vector / stdin (0)
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
