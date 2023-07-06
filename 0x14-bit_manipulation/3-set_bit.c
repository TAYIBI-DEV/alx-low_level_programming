#include "main.h"

/**
 * set_bit - function set bit
 * @n: pointer
 * @index: unsigned int
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	for (x = 1; index > 0; index--, x *= 2)
		;

	*n += x;

	return (1);
}
