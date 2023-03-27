#include "main.h"

/**
 * print_rev - function reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len + 1; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
