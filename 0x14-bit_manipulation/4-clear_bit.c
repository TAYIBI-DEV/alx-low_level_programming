#include "main.h"

/**
 * clear_bit - function that sets the value of bit to 0
 * @n: pointer
 * @index: index
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
