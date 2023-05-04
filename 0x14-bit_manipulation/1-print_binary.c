#include "main.h"

/**
 * print_binary - function that print binary
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int x;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (x = 0; (temp >>= 1) > 0; x++)
		;
	for (; x >= 0; x--)
	{
		if ((n >> x) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

