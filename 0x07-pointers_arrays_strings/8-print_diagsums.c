#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 *
 * @a: pointer
 * @size: the size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}
		printf("%d,", sum1);
		printf(" %d\n", sum2);
}
