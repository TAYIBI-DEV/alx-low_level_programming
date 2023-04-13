#include "main.h"

/**
 * _memset - function that fills memory with b
 * @s: pointer
 * @b: char
 * @n: int
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}


/**
 * _calloc - function that allocates memory
 * @nmemb: int
 * @size: int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb - 1);

	return (p);
}
