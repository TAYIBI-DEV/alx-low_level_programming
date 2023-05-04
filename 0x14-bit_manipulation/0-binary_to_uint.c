#include "main.h"

/**
 * binary_to_uint - function that convert binary to unint
 * @b: binary
 * Return: convert number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		x = x * 2 + (*b++ - '0');
	}
	return (x);
}
