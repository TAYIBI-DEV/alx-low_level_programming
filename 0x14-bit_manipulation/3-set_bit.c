#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * @n: pointer
 * @index: index
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index >= 64)
		return (-1);

	for (; index > 0; index--, x *= 2)
		;

	*n += x;

	return (1);
}
