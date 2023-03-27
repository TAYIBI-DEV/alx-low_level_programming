#include "main.h"

/**
 * _puts - function prints a str & followed by new line
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
