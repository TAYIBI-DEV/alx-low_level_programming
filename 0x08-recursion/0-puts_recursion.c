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

	for (P = s; *P != '\0'; P++)
	{
		_putchar(*P);
	}
	_putchar('\n');
}
