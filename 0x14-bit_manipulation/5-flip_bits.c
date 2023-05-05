#include "main.h"

/**
 * flip_bits - function that return the nbr of bit to flip
 * @n: the number
 * @m: number
 * Return: nbe of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int p = 0;

	while (x)
	{
		p++;
		x &= (x - 1);
	}
	return (p);
}
