#include "main.h"

/**
 * get_bit - function that return the value of a bit at a given idx
 * @n: the number
 * @index: index
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return (n >> index & 1);
}
