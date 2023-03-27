#include  "main.h"

/**
 * swap_int - function swap two int
 * @a: value 1
 * @b: value 2
 * return: void
 */

void swap_int (int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
