#include "main.h"

/**
 * _strchr - function that locates a character
 * @s: char
 * @c: char
 * Return: not void
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr != c)
			ptr++;
		else
			return (ptr);
	}
	if (c == '\0')
		return (ptr);

	return (NULL);
}

