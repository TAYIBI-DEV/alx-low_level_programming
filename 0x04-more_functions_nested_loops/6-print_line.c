#include "main.h"

/**
 * print_line - prints lines
 *@n: number of prints
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
	if (n <= 0)
		_putchar('\n');

}

