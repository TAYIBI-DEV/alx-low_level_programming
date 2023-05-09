#include "main.h"

/**
 * read_textfile - function read text fils
 * @filename: file
 * @letters: size of letter
 * Return: nbr of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	char *buff;
	ssize_t r, w;

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fp, buff, letters);
	w = write(STDOUT_FILENO, buff, r);
	if (w < 0 || w != r)
		return (0);

	free(buff);
	close(fp);
	return (r);
}


