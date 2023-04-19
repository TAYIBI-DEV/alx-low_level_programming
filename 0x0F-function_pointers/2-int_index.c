#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of int
 * @size: size of array
 * @cmp: pointer function
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int *p;
	int i;

	p = array;
	if (size && array && cmp)
	for (i = 0; i < size; i++)
	{
		if (cmp(p[i]))
		return (i);
	}
	return (-1);
}
