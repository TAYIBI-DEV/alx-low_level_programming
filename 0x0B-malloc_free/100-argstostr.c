#include "main.h"

/**
 * _strlen - function find length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
		return (i);
}

/**
 * argstostr - function that concatinates all args
 * @ac: int
 * @av: arguments
 * Return: not void
 */

char *argstostr(int ac, char **av)
{
	int i, size, j, count = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++, size++)
		size += _strlen(av[i]);
	s = malloc(sizeof(char) * size + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
		{
			s[count] = av[i][j];
		}
		s[count] = '\n';
		count++;
	}
	s[count] = '\0';
	return (s);
}

