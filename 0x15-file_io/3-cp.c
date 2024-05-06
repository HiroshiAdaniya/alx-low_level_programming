#include "main.h"
void file_to_error(char *);
void file_from_error(char *);
void close_error(int);
void transfer_data(int, int, char *, char *);
/**
 * main - Copies context from a file to another
 * @argc: argument counter
 * @argv: argument vector
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 29);
		exit(97);
	}

	file_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		file_to_error(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		file_from_error(argv[1]);

	transfer_data(file_from, file_to, argv[1], argv[2]);

	if (close(file_from) == -1)
		close_error(file_from);
	if (close(file_to) == -1)
		close_error(file_to);

	return (0);
}
/**
 * file_from_error - prints an error message related to file_from
 * @file: name of file
 * Return: Nothing / void / exits with code
 */
void file_from_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);

}
/**
 * transfer_data - copies the text from a file to another
 * @file_from: a file descriptor
 * @file_to: a file descriptor
 * @f1: name of file from
 * @f2: name of file to
 * Retun: Nothing / void
 */
void transfer_data(int file_from, int file_to, char *f1, char *f2)
{
	char buffer[1024];
	int i = 1024;
	int j = 0;

	while (i == 1024)
	{
		i = read(file_from, buffer, 1024)
		if (i == -1)
			file_from_error(f1);
		j =  write(file_to, buffer, i);
		if (j == -1)
			file_to_error(f2);
	}
}
/**
 * file_to_error - prints an error message related to file_t
 * @file: name of file
 * Return: Nothing / void / exits with code
 */
void file_to_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * close_error - prints an error message if close fails
 * @fp: file descriptor
 * Return: Nothing / void / exits with code
 */
void close_error(int fp)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp);
	exit(100);
}
