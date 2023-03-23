#include "main.h"

/**
 * print_diagonal - print line in the diagonal
 * @n: number of times
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 2; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			for (j = 2; j <= i; j++)
			{
		
				_putchar(' ');
			
			}
		
		}
	}


}
