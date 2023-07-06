#include "main.h"

/**
 * print_binary - function that print a num as binary str
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int x;
	int a;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (x = n, a = 0; (x >>= 1) > 0; a++)
		;

	for (; a >= 0; a--)
	{
		if ((n >> a) & 1)
			printf("1");
		else
			printf("0");
	}
}
