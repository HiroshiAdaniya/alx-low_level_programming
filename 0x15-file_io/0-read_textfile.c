#include "main.h"
/**
 * read_textfile - Reads a text file and prints to the POSIX STDOUT
 * @filename: name of file that will be accessed
 * @letters: number of letters to be printed
 * Return: Numbers of letters printed, else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	unsigned int i = 0;
	int j, c = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	for (i = 0; i < letters && (c = getc(fp)) != EOF; i++)
	{
		j = write(STDOUT_FILENO, &c, 1);
		if (j == -1)
			return (0);
	}
	fclose(fp);
	return (i);
}
