#include "main.h"
void error(int, char *);
/**
 * main - copies the content of one file to another
 * @argc: argument counter
 * @argv: argument vector / pointer to array of string
 * Return: 0 on success, else terminate with exit codes
 */
int main(int argc, char *argv[])
{
	int fileto, filefrom, j;
	int i = 1024;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	filefrom = open(argv[1], O_RDONLY);
	if (filefrom == -1)
		error(98, argv[1]);
	fileto = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fileto == -1)
		error(99, argv[2]);

	while (i == 1024)
	{
		i = read(filefrom, buffer, 1024);
		if (i == -1)
			error(98, argv[1]);
		j = write(fileto, buffer, i);
		if (j == -1)
			error(99, argv[2]);
	}
	j = close(filefrom);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	j = close(fileto);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	return (0);
}
/**
 * error - prints an error message to the POSIX standard error
 * @a: an exit code / int
 * @string: pointer to a string
 * Return: Nothing / void
 */
void error(int a, char *string)
{
	if (a == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", string);
		exit(98);
	}
	if (a == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", string);
		exit(99);
	}
}
