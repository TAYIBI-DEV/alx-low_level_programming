#include "main.h"

/**
 *_memset - fuction that file a memory
 *@s: poiter
 *@b: the value to be set
 *@n: bytes
 *Return: not void
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	unsigned int i;

	ptr = s;
	for (i = 0; i < n; i++)
	{
		*ptr++ = b;
	}
	return (s);
}
