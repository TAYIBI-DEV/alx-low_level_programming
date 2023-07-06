#include "main.h"

/**
 * flip_bits - function that flip bits
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int c = 0;

	x = n ^ m;

	while (x)
	{
		c++;
		x &= (x - 1);
	}

	return (c);
}
