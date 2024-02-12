#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file / pointer to a string of char
 * @text_content: a pointer to a NULL terminated string
 * Return: 1 on success else -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp, j;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	j = write(fp, text_content, i);
	if (j == -1 || fp == -1)
		return (-1);
	close(fp);
	return (1);
}
