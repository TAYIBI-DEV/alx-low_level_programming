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

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);
	memset(p, 0, sizeof(int) * nmemb);
	return (p);
}
