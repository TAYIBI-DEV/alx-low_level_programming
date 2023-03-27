#include "main.h"

/**
 * puts2 - functin prints other caracter stating with the first one
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int c = strlen(str);

		for (i = 0; i < c; i++)
		{
			_putchar(str[i]);
			i++;
		}
	_putchar('\n');
}

