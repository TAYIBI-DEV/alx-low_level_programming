#include "main.h"

/**
 * _strdup - function returns a pointer to a new string duplicate
 * @str: string
 * Return: not void
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	p = malloc(sizeof(char) * (i + 1));

	if (p == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		p[j] = str[j];
	return (p);
}
