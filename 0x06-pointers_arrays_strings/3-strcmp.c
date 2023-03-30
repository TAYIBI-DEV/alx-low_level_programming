#include "main.h"

/**
 * _strcmp - function compare two string
 * @s1: string 1
 * @s2: string 2
 * Return: not void
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
		int c;

		c = s1[i] - s2[i];
		return (c);
		}
		i++;
	}
	return (0);
}
