#include "main.h"

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
	p = malloc(size * nmemb);

	if (p == 0)
	{
		return (NULL);
	}
	else
		memset(p, 0, size * nmemb);

	return (p);
}
