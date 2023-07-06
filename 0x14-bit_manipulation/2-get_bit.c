#include "main.h"

/**
 * get_bit - funtion get the bit at the index
 * @n: the num
 * @index: unsigned int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = n >> index;

	return (x & 1);
}
