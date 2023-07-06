#include "main.h"

/**
 * clear_bit - function clear bit
 * @n:pointer
 * @index: unsigned int
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int x;

	if (index > 64)
		return (-1);

	x = index;

	for (i = 1; x > 0; i *= 2, x--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
