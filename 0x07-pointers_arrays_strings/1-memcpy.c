#include "main.h"

/**
 * _memcpy - function copy n bytes
 * @dest: destination
 * @src: source
 * @n: bytes copied
 * Return: not void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr1 = dest;
	char *ptr2 = src;

	for (i = 0; i < n; i++)
	{
		*(ptr1 + i) = *(ptr2 + i);
	}
	return (dest);
}
