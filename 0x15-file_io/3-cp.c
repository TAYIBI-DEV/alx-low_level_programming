#include "main.h"

#define USA "Usage: cp file_from file_to\n"
#define NOREAD "Error: Can't read from file %s\n"
#define NOWRITE "Error: Can't write to %s\n"
#define NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - entry point
 * @ac: agument count
 * @av: argument vector
 *
 * Return: always 1 success 0 on failure
 */

int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b;
	char buff[READ_BUF];

	if (ac != 3)
		dprintf(STDERR_FILENO, USA), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd < 0)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (to_fd < 0)
		dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);
	while ((b = read(from_fd, buff, READ_BUF)) > 0)
		if (write(to_fd, buff, b) != b)
			dprintf(STDERR_FILENO, NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, NOREAD, av[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, NOCLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, NOCLOSE, from_fd), exit(100);
	return (EXIT_SUCCESS);
}
