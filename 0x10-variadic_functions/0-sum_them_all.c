#include "variadic_functions.h"

/**
 * sum_them_all - fonction that return the sum
 * @n: int numbr of elements
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list p;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}

