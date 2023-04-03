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
	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		else
		{
		ptr++;
		}
	}
	return (NULL);
}
