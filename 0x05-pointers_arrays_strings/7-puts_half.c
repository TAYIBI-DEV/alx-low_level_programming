#include "main.h"

/**
 * puts_half - print last half string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int c = strlen(str) - 1;

	for (i = c / 2 + 1 ; i <= c; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
