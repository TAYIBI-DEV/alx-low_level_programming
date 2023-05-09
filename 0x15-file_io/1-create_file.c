#include "main.h"

/**
 * create_file - function that creat a file
 * @filename: the name of the file created
 * @text_content: content of the file created
 * Return: 1 success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int w = 0;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (text_content)
	{
		w = dprintf(fp, "%s", text_content);
		if (w == -1)
			return (-1);
	}

	close(fp);
	return (1);
}


