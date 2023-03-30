#include "main.h"

/**
 * _strncat - function concatenate strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *c;

	c = strncat(dest, src, n);
	return (c);
}
