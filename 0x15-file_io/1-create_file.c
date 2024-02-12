#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file / pointer to a string of char
 * @text_content: a pointer to a NULL terminated string
 * Return: 1 on success else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filep, j;
	FILE *fp;

	if (filename == NULL)
		return (-1);
	filep = open(filename, O_CREAT, S_IRUSR | S_IWUSR /*or 0600*/);
	if (filep == -1)
		return (-1);
	close(filep);

	fp = fopen(filename, "w");
	if (fp == NULL)
		return (-1);
	j = fputs(text_content, fp);
	if (j == -1)
		return (-1);
	fclose(fp);
	return (1);
}
