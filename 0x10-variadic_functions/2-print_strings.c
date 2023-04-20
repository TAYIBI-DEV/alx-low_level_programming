#include "variadic_functions.h"

/**
 * print_strings - function prints strings
 * @separator: char
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", (str = va_arg(p, char *)) ? str : "(nile)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
