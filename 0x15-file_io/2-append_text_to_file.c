#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of file
 * @text_content: text to append
 * Return: 1 on success, else -1  on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j = 0;
	int fp;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_RDWR | O_APPEND);
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

	return (1);
}
