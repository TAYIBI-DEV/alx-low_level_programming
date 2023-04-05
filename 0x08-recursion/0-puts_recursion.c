#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * @s: string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	char *P;

	P = s;

	if (*P == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*P);
	_puts_recursion(P + 1);
}
